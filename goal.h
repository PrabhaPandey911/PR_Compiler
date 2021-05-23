#ifndef GOAL_HEADER
#define GOAL_HEADER

#endif // !GOAL_HEADER

#ifndef YYSTYPE_DECLARATION
#define YYSTYPE_DECLARATION 1

#include "ast_node.h"
#include "block.h"
#include "stmt.h"


union Node{
	char* value;
	class Goal *goal; 
	class Import *import;
	class Choose *chs;
	class Declist *dclst;
	class Block *blck;
	class StmtList *stmtlst;
	class Stmt *smt;
	class FileName *flnm;
	class Dec *dc;
	class Vardec *vrdc;
	class Fundec *fndc;
	class Vartype *vrtyp;
	class VarDecList *vrdclst;
	class VarInit *vrint;
	class Array *ary;//doubtfull
	class Expr *exp;
	class Element *elmt;//doubtfull
	class Values *vls;
	class Boolval *blvl;
	class FileOperation *flop;
	class Params *prms;
	class ReturnType *rtrntyp;
	class ParamList *prmlst;
	class ArgType *argtyp;
	class BlockStmts *blckstmts;
	class ContinueStmt *cntnstmt;
	class ExprStmt *expstmt;
	class LoopStmt *lpstmt;
	class SelectStmt *slctstmt;
	class BreakStmt *brkstmt;
	class ReturnStmt *rtrnstmt;
	class ElseIf *elsif;
	class IncDecExpr *incordecexpr;
	class AssignExpr *assignexpr;
	class SimpleExpr *simpleexpr;
	class AndExpr *andexpr;
	class NotExpr *notexpr;
	class RelExpr *relexpr;
	class SumExpr *sumexpr;
	class Relop *rlop;
	class Sumop *smop;
	class Term *trm;
	class Mulop *mlop;
	class AfterID *afterID;
	class FollowTerm *flwterm;
	class Follow *flw;
	class Args *arg;
};


typedef union Node YYSTYPE;

class Goal: public AstNode{
private:

	class Import *import;

	class Choose *choose;

public:
	Goal(class Import *import, class Choose *choose);
	virtual void print_ast(){
		import->print_ast();
		choose->print_ast();
	}
};

#endif