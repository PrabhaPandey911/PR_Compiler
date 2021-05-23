%{
	#include <bits/stdc++.h>
	#include "goal.h"
	#include "block.h"
	#include "stmt.h"
	using namespace std;
	extern "C" int yylex();
	void yyerror(const char *s);
	extern FILE *yyin;
	extern int yyparse();
	extern union Node yylval;
	class Goal* root = NULL;
%}

/*---------Tokens-----------*/
%token <value> UNSIGNED_INT UNSIGNED_LONG INT 
%token <value> BOOL CHAR LONG STRING
%token <value>  RETURN  BREAK  READ WRITE CLOSE CONTINUE FOR WHILE IF ELSE ELSEIF VOID
%token <value> TRUE FALSE UNSIGNED_INT_VALUE SIGNED_INT_VALUE CHAR_VALUE STRING_VALUE VARIABLE_NAME  
%token IMPORT QUESTION_MARK COLON COMMA OPN_BRKT CLOSE_BRKT OPN_SQ_BRKT CLOSE_SQ_BRKT OPN_CURLY_BRKT CLOSE_CURLY_BRKT SEMICOLON FILEREAD FILEWRITE
%token <value> LTEQ GTEQ LT GT DBL_EQ 
%token <value> PLUS_EQ MINUS_EQ MULTIPLY_EQ DIVIDE_EQ MODULO_EQ 
%token <value> PREINC POSTINC PREDEC POSTDEC 
%token <value> PLUS MINUS MULTIPLY DIVIDE MODULO 
%token <value> NOT_EQ EQ NOT OR AND 

/*----------Precedence---------*/
%left COMMA
%right EQ PLUS_EQ MINUS_EQ MULTIPLY_EQ DIVIDE_EQ MODULO_EQ
%right QUESTION_MARK COLON
%left OR
%left AND
%left DBL_EQ NOT_EQ
%left LT LTEQ GT GTEQ 
%left PLUS MINUS
%left MULTIPLY DIVIDE MODULO
%right PREINC PREDEC
%left POSTINC POSTDEC
%right NOT
%left OPN_BRKT CLOSE_BRKT OPN_SQ_BRKT CLOSE_SQ_BRKT OPN_CURLY_BRKT CLOSE_CLURLY_BRKT

/*----------Non-Terminals ---------*/
%type <goal> Goal
%type <import> import_
%type <chs> choose
%type <dclst> declist
%type <blck> block
%type <stmtlst> stmtlist
%type <smt> stmt
%type <flnm> filename
%type <dc> dec
%type <vrdc> vardec
%type <fndc> fundec
%type <vrtyp> vartype
%type <vrdclst> vardeclist
%type <vrint> varinit
%type <ary> array
%type <exp> expr
%type <elmt> element
%type <vls> values
%type <blvl> boolval
%type <flop> file_operation
%type <prms> params
%type <rtrntyp> return_type
%type <prmlst> paramlist
%type <argtyp> arg_type
%type <blckstmts> blockstmts
%type <cntnstmt> continuestmt
%type <expstmt> exprstmt
%type <lpstmt> loopstmt
%type <slctstmt> selectstmt
%type <brkstmt> breakstmt
%type <rtrnstmt> returnstmt
%type <elsif> else_if
%type <incordecexpr> inc_or_dec_expr
%type <assignexpr> assign_expr
%type <simpleexpr> simple_expr
%type <andexpr> and_expr
%type <notexpr> not_expr
%type <relexpr> rel_expr
%type <sumexpr> sum_expr
%type <rlop> relop
%type <smop> sumop
%type <trm> term
%type <mlop> mulop
%type <afterID> after_ID
%type <flwterm> flw_term
%type <flw> follow
%type <arg> args
%%


Goal: import_ choose { $$ = new Goal($1,$2); root = $$;}
;

choose: declist { $$ = new Choose($1);}
	  | block 	{ $$ = new Choose($1);}
	  | stmtlist {$$ = new Choose($1);}
;

import_ :import_ '\n' IMPORT filename   { $$ = new Import($4,$1);}
		| IMPORT filename { $$ = new Import($2);}
		| /* empty */ 		{ $$ = new Import();}

;

filename: VARIABLE_NAME {$$ = new FileName($1);}
		| STRING_VALUE {$$ = new FileName($1);}
;

declist:  declist dec {$$ = new Declist($1,$2);} 
		 | dec {$$ = new Declist($1);} 
;

dec: vardec {$$ = new Dec($1);}
	| fundec {$$ = new Dec($1);}
;


vardec: vartype vardeclist SEMICOLON {$$ = new Vardec($1,$2);}
;

vardeclist: vardeclist COMMA vardeclist {$$ = new VarDecList($1,$3);}
			| varinit {$$ = new VarDecList($1);}
			| varinit EQ array {$$ = new VarDecList($1,$2,$3);}
			| varinit EQ expr  { $$ = new VarDecList($1,$2,$3);}
;

array: OPN_SQ_BRKT CLOSE_SQ_BRKT {$$ = new Array();}
		| OPN_CURLY_BRKT element CLOSE_CURLY_BRKT {$$ = new Array($2);}
		| OPN_CURLY_BRKT OPN_CURLY_BRKT element CLOSE_CURLY_BRKT CLOSE_CURLY_BRKT {$$ = new Array($3);}
;

element: values {$$ = new Element($1);}
		| VARIABLE_NAME {$$ = new Element($1);}
		| element COMMA values {$$ = new Element($1,$3);}
		| OPN_CURLY_BRKT element CLOSE_CURLY_BRKT COMMA OPN_CURLY_BRKT element CLOSE_CURLY_BRKT {$$ = new Element($2,$6);}
		| /*empty*/ {$$ = new Element();}
;
    
values: SIGNED_INT_VALUE {$$ = new Values($1,1);}
		| UNSIGNED_INT_VALUE {$$ = new Values($1,0);}
		| boolval {$$ = new Values($1);}
		| CHAR_VALUE {$$ = new Values($1,3);}
		| STRING_VALUE {$$ = new Values($1,4);}
;

boolval: TRUE {$$ = new Boolval($1);}
		| FALSE {$$ = new Boolval($1);}
;

varinit: VARIABLE_NAME {$$ = new VarInit($1);}
		| VARIABLE_NAME OPN_SQ_BRKT CLOSE_SQ_BRKT {$$ = new VarInit($1,1,0);}
		| VARIABLE_NAME OPN_SQ_BRKT CLOSE_SQ_BRKT OPN_SQ_BRKT CLOSE_SQ_BRKT {$$ = new VarInit($1,0,1);}
		| VARIABLE_NAME OPN_SQ_BRKT VARIABLE_NAME CLOSE_SQ_BRKT {$$ = new VarInit($1,1,0,$3);}
		| VARIABLE_NAME OPN_SQ_BRKT VARIABLE_NAME CLOSE_SQ_BRKT OPN_SQ_BRKT VARIABLE_NAME CLOSE_SQ_BRKT {$$ = new VarInit($1,$3,$6);}
		| VARIABLE_NAME OPN_SQ_BRKT CLOSE_SQ_BRKT OPN_SQ_BRKT VARIABLE_NAME CLOSE_SQ_BRKT {$$ = new VarInit($1,0,1,$5);}
		| VARIABLE_NAME OPN_SQ_BRKT UNSIGNED_INT_VALUE CLOSE_SQ_BRKT {$$ = new VarInit($1,1,0,stoi($3));}
		| VARIABLE_NAME OPN_SQ_BRKT UNSIGNED_INT_VALUE CLOSE_SQ_BRKT OPN_SQ_BRKT UNSIGNED_INT_VALUE CLOSE_SQ_BRKT {$$ = new VarInit($1,stoi($3),stoi($6),1,0);} 
		| VARIABLE_NAME OPN_SQ_BRKT  CLOSE_SQ_BRKT OPN_SQ_BRKT UNSIGNED_INT_VALUE CLOSE_SQ_BRKT {$$ = new VarInit($1,0,1,stoi($5));}
;

vartype: UNSIGNED_INT {$$ = new Vartype($1);}
	| UNSIGNED_LONG {$$ = new Vartype($1);}
	| INT {$$ = new Vartype($1);}
	| BOOL {$$ = new Vartype($1);}
	| CHAR {$$ = new Vartype($1);}
	| LONG {$$ = new Vartype($1);}
	| STRING {$$ = new Vartype($1);}
;

file_operation:FILEREAD VARIABLE_NAME EQ READ OPN_BRKT filename CLOSE_BRKT SEMICOLON stmtlist CLOSE OPN_BRKT filename CLOSE_BRKT SEMICOLON {$$ = new FileOperation($2, $6,$9);}
		| FILEWRITE WRITE OPN_BRKT filename CLOSE_BRKT SEMICOLON stmtlist CLOSE OPN_BRKT filename CLOSE_BRKT SEMICOLON {$$ = new FileOperation($4, $7);}
;

fundec: vartype VARIABLE_NAME OPN_BRKT params CLOSE_BRKT block {$$ = new Fundec($1,$2,$4,$6);}
	| return_type VARIABLE_NAME OPN_BRKT params CLOSE_BRKT block {$$ = new Fundec($1,$2,$4,$6);}	  

;

return_type: VOID {$$ = new ReturnType($1);}
			| vartype OPN_SQ_BRKT CLOSE_SQ_BRKT	{$$ = new ReturnType($1,1);}
			| vartype OPN_SQ_BRKT CLOSE_SQ_BRKT OPN_SQ_BRKT CLOSE_SQ_BRKT {$$ = new ReturnType($1,2);}
;

params : paramlist {$$ = new Params($1);}
;

paramlist: arg_type COMMA paramlist {$$ = new ParamList($1,",",$3);}
		 | arg_type {$$ = new ParamList($1);}
		 | /*empty*/ {$$ = new ParamList();}
;

arg_type: vartype VARIABLE_NAME {$$ = new ArgType($1,$2);}	
		| vartype VARIABLE_NAME OPN_SQ_BRKT CLOSE_SQ_BRKT { $$ = new ArgType($1,$2); }
		| vartype VARIABLE_NAME OPN_SQ_BRKT CLOSE_SQ_BRKT OPN_SQ_BRKT VARIABLE_NAME CLOSE_SQ_BRKT {$$ = new ArgType($1,$2,$6);}
		| vartype VARIABLE_NAME OPN_SQ_BRKT CLOSE_SQ_BRKT OPN_SQ_BRKT UNSIGNED_INT_VALUE CLOSE_SQ_BRKT {$$ = new ArgType($1,$2,stoi($6));}
;

block: OPN_CURLY_BRKT blockstmts {$$ = new Block($2);}
;

blockstmts: CLOSE_CURLY_BRKT {$$ = new BlockStmts();}
		   | declist stmtlist CLOSE_CURLY_BRKT {$$ = new BlockStmts($1,$2);}
		   | stmtlist CLOSE_CURLY_BRKT {$$ = new BlockStmts($1);}
;

continuestmt: CONTINUE {$$ = new ContinueStmt();}
;

stmt: exprstmt {$$ = $1;} 
	| file_operation {$$ = $1;}
	| loopstmt {$$ = $1;}
	| selectstmt {$$ = $1;}
	| breakstmt {$$ = $1;}
	| continuestmt {$$ = $1;}
	| returnstmt {$$ = $1;}
;

returnstmt: RETURN exprstmt {$$ = new ReturnStmt($2);}
;


stmtlist: stmtlist stmt {$$ = new StmtList($1,$2);}
		| stmt {$$ = new StmtList($1);}
;

exprstmt: expr SEMICOLON {$$ = new ExprStmt($1);}
		| SEMICOLON {$$ = new ExprStmt();}
;

selectstmt:IF OPN_BRKT expr CLOSE_BRKT block ELSE block {$$ = new SelectStmt($1,$3,$5,$6,$7);}
		  | IF OPN_BRKT expr CLOSE_BRKT block else_if {$$ = new SelectStmt($1, $3, $5, $6);}
		  | IF OPN_BRKT expr CLOSE_BRKT block {$$ = new SelectStmt($1,$3,$5);}
;

else_if: ELSEIF OPN_BRKT expr CLOSE_BRKT block else_if ELSE block {$$ = new ElseIf($1,$3, $5,$6, $7,$8);}
		| ELSEIF OPN_BRKT expr CLOSE_BRKT block {$$ = new ElseIf($1,$3, $5);}
;

loopstmt: WHILE OPN_BRKT expr CLOSE_BRKT block {$$ = new LoopStmt($1,$3,$5);}
		| FOR OPN_BRKT assign_expr SEMICOLON expr SEMICOLON inc_or_dec_expr CLOSE_BRKT block {$$ = new LoopStmt($1, $3, $5,$7,$9);}
		| FOR OPN_BRKT assign_expr SEMICOLON expr SEMICOLON CLOSE_BRKT block {$$ = new LoopStmt($1,$3,$5,$8);}
;

assign_expr:  varinit EQ expr {$$ = new AssignExpr($1,$2,$3);}
			| vartype varinit EQ expr {$$ = new AssignExpr($1,$2,$3,$4);}
			| /*empty*/ {$$ = new AssignExpr();}
;

inc_or_dec_expr:  flw_term EQ expr {$$ = new IncDecExpr($1,$2,$3);}
	| flw_term PLUS_EQ expr {$$ = new IncDecExpr($1,$2,$3);}
	| flw_term MINUS_EQ expr {$$ = new IncDecExpr($1,$2,$3);}
	| flw_term MULTIPLY_EQ expr {$$ = new IncDecExpr($1,$2,$3);}
	| flw_term DIVIDE_EQ expr {$$ = new IncDecExpr($1,$2,$3);}
	| flw_term MODULO_EQ expr {$$ = new IncDecExpr($1,$2,$3);}
	| POSTINC {$$ = new IncDecExpr($1);}
	| POSTDEC {$$ = new IncDecExpr($1);}
	| PREINC {$$ = new IncDecExpr($1);}
	| PREDEC {$$ = new IncDecExpr($1);}
;


breakstmt: BREAK SEMICOLON {$$ = new BreakStmt();}
;


expr: inc_or_dec_expr {$$ = new Expr($1);}
	| simple_expr {$$ = new Expr($1);}
	| expr QUESTION_MARK expr COLON expr {$$ = new Expr(new TernaryExpr($1, $3,$5));}
;
	

simple_expr: simple_expr OR and_expr {$$ = new SimpleExpr($1,$2,$3);}
			| and_expr {$$ = new SimpleExpr($1);}
;

and_expr: and_expr AND not_expr {$$ = new AndExpr($1,$2,$3);}
		| not_expr {$$ = new AndExpr($1);}
;

not_expr: NOT not_expr {$$ = new NotExpr($1,$2);}
		| rel_expr {$$ = new NotExpr($1);}
;

rel_expr: sum_expr relop sum_expr {$$ = new RelExpr($1,$2,$3);}
		| sum_expr {$$ = new RelExpr($1);}
;
 
relop: LTEQ {$$=new Relop($1,0);}
	| LT {$$=new Relop($1,1);}
	| GT {$$=new Relop($1,2);}
	| GTEQ {$$=new Relop($1,3);}
	| DBL_EQ {$$=new Relop($1,4);}
	| NOT_EQ {$$=new Relop($1,5);}
;

sum_expr: sum_expr sumop term {$$ = new SumExpr($1,$2,$3);}
		| term {$$ = new SumExpr($1);}
;

sumop: PLUS {$$ = new Sumop($1);}
	| MINUS {$$ = new Sumop($1);}
;

term: term mulop flw_term {$$ = new Term($1,$2,$3);}
	| flw_term {$$ = new Term($1);}
;

mulop: MULTIPLY {$$ = new Mulop($1);}
	| DIVIDE {$$ = new Mulop($1);}
	| MODULO {$$ = new Mulop($1);}
;


flw_term: values  {$$ = new FollowTerm($1);}
 | VARIABLE_NAME {$$ = new FollowTerm($1,0);}
 | VARIABLE_NAME OPN_BRKT CLOSE_BRKT {$$ = new FollowTerm($1,1);}
 | VARIABLE_NAME after_ID {$$ = new FollowTerm($1,$2);}
 | OPN_BRKT expr CLOSE_BRKT {$$ = new FollowTerm($2);}
;

after_ID: OPN_SQ_BRKT expr CLOSE_SQ_BRKT follow {$$ = new AfterID($2,$4);} 
		| OPN_BRKT args CLOSE_BRKT  {$$ = new AfterID($2);}
;

follow: OPN_SQ_BRKT expr CLOSE_SQ_BRKT {$$ = new Follow($2);}
	  | /*empty*/ {$$ = new Follow();}
;

args: args COMMA expr {$$ = new Args($1,$3);}
	| expr {$$ = new Args($1);}
;

%%

void yyerror(const char *s)
{
	cout<<"Error: "<<s<<endl;
	exit(-1);
}

int main(int argc, char **argv) {
	if (argc == 2)
	{
		yyin = fopen(argv[1], "r");
		if(!yyin)
		{
			cout<<"Please enter existing file path!"<<endl;
			exit(-1);
		}
	    yyparse();
	    cout<<"\nParsing Successfull!!\n"<<endl;
    	cout << "Abstract Syntax Tree: \n"<<endl;
    	root->print_ast();
    	fclose(yyin);
    	
    }
    else
    {
    	cout << "Enter File path as argument!"<<endl;
    	exit(-1);
    }
    return 0;
}