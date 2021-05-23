#ifndef STATEMENT_HEADER
#define STATEMENT_HEADER

#include "block.h"

class Expr;

class TernaryExpr:public Stmt{
	public:
		 class Expr *first;
	     class Expr *second;
	     class Expr *third;  

	public:
	     TernaryExpr (class Expr *first, class Expr *second,class Expr *third ) :first(first), second(second), third(third) {} 
	     void print_ast();
};

class Follow:public Stmt{
	private:
		class Expr *expr=NULL;
	public:
		Follow()=default;
		Follow(class Expr *expr):expr(expr){}
		void print_ast();
};

class Args:public Stmt{
	private:
		class Args* args=NULL;
		class Expr* expr=NULL;
	public:
		Args(class Expr* expr):expr(expr){}
		Args(class Args* args,class Expr* expr):args(args),expr(expr){}
		void print_ast();
};

class AfterID:public Stmt{
	private:
		class Expr *expr=NULL;
		class Follow* follow=NULL;
		class Args* args=NULL;
	public:
		AfterID(class Expr *expr, class Follow *follow):expr(expr),follow(follow){}
		AfterID(class Args *args):args(args){}
		void print_ast();
};

class FollowTerm:public Stmt{
	private:
		class Values* val=NULL;
		std::string variable_name="";
		class AfterID* afterID=NULL;
		class Expr *expr=NULL;
		int array=0;
	public:
		//F->values
		FollowTerm(class Values* val):val(val){}

		//F->ID | ID()
		FollowTerm(std::string variable_name,int array):variable_name(variable_name),array(array){}

		//F->ID after_ID
		FollowTerm(std::string variable_name,class AfterID* afterID):variable_name(variable_name), afterID(afterID){}

		//F->(expr)
		FollowTerm(class Expr *expr):expr(expr){}

		void print_ast();
};

class IncDecExpr:public Stmt{
	private:
		class FollowTerm* followTerm;
		class Expr *expr;
		char* assignment_operator;
		char* incdec=NULL;
	public:
		IncDecExpr(char* incdec):incdec(incdec){}
		IncDecExpr(class FollowTerm* followTerm, char* assignment_operator, class Expr *expr):followTerm(followTerm),assignment_operator(assignment_operator),expr(expr){}
		void print_ast();
};

class AssignExpr:public Stmt{
	private:
		class VarInit* varInitialisation=NULL;
		class Vartype* type=NULL;
		class Expr *expr=NULL;
		std::string operation="";
	public:
		AssignExpr()=default;
		AssignExpr(class VarInit* varInitialisation,std::string operation,class Expr *expr):varInitialisation(varInitialisation),operation(operation),expr(expr){}
		AssignExpr(class Vartype* type,class VarInit* varInitialisation, std::string operation, class Expr *expr):type(type),varInitialisation(varInitialisation), operation(operation), expr(expr){}
		void print_ast();
};

class Relop:public Stmt{
	private:
		std::string lteq="";
		std::string lt="";
		std::string gt="";
		std::string gteq="";
		std::string dbleq="";
		std::string noteq="";
		int indicator;

	public:
		Relop(std::string operation, int indicator_arg)
		{
			indicator = indicator_arg;
			if(indicator==0)
				lteq = operation;
			if(indicator==1)
				lt=operation;
			if(indicator==2)
				gt=operation;
			if(indicator==3)
				gteq=operation;
			if(indicator==4)
				dbleq=operation;
			if(indicator==5)
				noteq=operation;
		}
		void print_ast();
};

class Mulop:public Stmt{
	private:
		std::string mulOperations="";
	public:
		Mulop(std::string mulOperations):mulOperations(mulOperations){}
		void print_ast();
};

class Term:public Stmt{
	private:
		class Term* term=NULL;
		class FollowTerm* followTerm=NULL;
		class Mulop* mulop=NULL;
	public:
		Term(class Term* term,class Mulop* mulop,class FollowTerm* followTerm):term(term),mulop(mulop),followTerm(followTerm){}
		Term(class FollowTerm* followTerm):followTerm(followTerm){}
		void print_ast();
};

class Sumop:public Stmt{
	private:
		std::string plusOrMinus="";
	public:
		Sumop(std::string plusOrMinus):plusOrMinus(plusOrMinus){}
		void print_ast();
};

class SumExpr:public Stmt{
	private:
		class SumExpr* sumexpr=NULL;
		class Term* term=NULL;
		class Sumop* sumop=NULL;
	public:
		SumExpr(class SumExpr* sumexpr,class Sumop* sumop,class Term* term):sumexpr(sumexpr),sumop(sumop),term(term){}
		SumExpr(class Term* term):term(term){ }
		void print_ast();
};

class RelExpr:public Stmt{
	private:
		class SumExpr* sum_exprleft=NULL;
		class Relop* relop=NULL;
		class SumExpr* sum_exprright=NULL;
	public:
		RelExpr(class SumExpr* sum_exprleft,class Relop* relop,class SumExpr* sum_exprright):sum_exprleft(sum_exprleft), relop(relop), sum_exprright(sum_exprright){}
		RelExpr(class SumExpr* sum_exprleft):sum_exprleft(sum_exprleft){}
		void print_ast();
};

class NotExpr:public Stmt{
	private:
		std::string notOperation="";
		class NotExpr* not_expr=NULL;
		class RelExpr* rel_expr=NULL;
	public:
		NotExpr(std::string notOperation,class NotExpr* not_expr):notOperation(notOperation),not_expr(not_expr){}
		NotExpr(class RelExpr* rel_expr):rel_expr(rel_expr){}
		void print_ast();
};

class AndExpr:public Stmt{
	private:
		class AndExpr* andexpr=NULL;
		std::string andop="";
		class NotExpr* not_expr=NULL;
	public:
		AndExpr(class AndExpr* andexpr,std::string andop,class NotExpr* not_expr):andexpr(andexpr),andop(andop),not_expr(not_expr){}
		AndExpr(class NotExpr* not_expr):not_expr(not_expr){}
		void print_ast();
};

class SimpleExpr:public Stmt{
	private:
		class SimpleExpr* simple_expr=NULL;
		std::string orop="";
		class AndExpr* and_expr=NULL;

	public:
		SimpleExpr(class SimpleExpr* simple_expr,std::string orop,class AndExpr* and_expr):simple_expr(simple_expr),orop(orop),and_expr(and_expr){}
		SimpleExpr(class AndExpr* and_expr):and_expr(and_expr){ }
		void print_ast();
};

class Expr:public Stmt{
	private:
		class IncDecExpr* inc_dec=NULL;
		class SimpleExpr* simple_expr=NULL;
		class TernaryExpr* ternaryExpr=NULL;
	public:
		Expr(class IncDecExpr* inc_dec):inc_dec(inc_dec){}
		Expr(class SimpleExpr* simple_expr):simple_expr(simple_expr){}
		Expr(class TernaryExpr* ternaryExpr):ternaryExpr(ternaryExpr){}
		void print_ast();
};

class ExprStmt:public Stmt{
	private:
		class Expr* expr=NULL;
	public:
		ExprStmt()=default;
		ExprStmt(class Expr* expr):expr(expr){}
		void print_ast();
};

class BreakStmt:public Stmt{
	public:
		BreakStmt()=default;
		void print_ast(){
		}
};

class ContinueStmt:public Stmt{
	public:
		ContinueStmt()=default;
		void print_ast(){
		}
};

class ReturnStmt:public Stmt{
	private:
		class ExprStmt* exprstmt=NULL;
	public:
		ReturnStmt(class ExprStmt* exprstmt):exprstmt(exprstmt){}
		void print_ast();
};

class ElseIf:public Stmt{
	private:
		std::string else_ifString="";
		class Expr* else_ifCondition=NULL;
		class Block* else_ifBlock=NULL;
		class ElseIf *else_if=NULL;
		int check=0;
		std::string elseString="";
		class Block* elseBlock=NULL;
	public:
		ElseIf(std::string else_ifString,class Expr* else_ifCondition,class Block* else_ifBlock, class ElseIf *else_if, std::string elseString,class Block* elseBlock):
			else_ifString(else_ifString),else_ifCondition(else_ifCondition), else_ifBlock(else_ifBlock), else_if(else_if), check(1), elseString(elseString),elseBlock(elseBlock){}

		ElseIf(std::string else_ifString,class Expr* else_ifCondition, class Block* else_ifBlock):
			else_ifString(else_ifString),else_ifCondition(else_ifCondition), else_ifBlock(else_ifBlock){}

		void print_ast();

};

class SelectStmt:public Stmt{
	private:
		std::string ifString="";
		class Expr* ifCondition=NULL;
		class Block* ifBlock=NULL;
		std::string elseString="";
		class Block* elseBlock=NULL;
		class ElseIf* else_if=NULL;

	public:
		SelectStmt(std::string ifString, class Expr* ifCondition, class Block* ifBlock, std::string elseString,class Block* elseBlock):
			ifString(ifString), ifCondition(ifCondition), ifBlock(ifBlock), elseString(elseString), elseBlock(elseBlock){}

		SelectStmt(std::string ifString, class Expr* ifCondition, class Block* ifBlock, class ElseIf* else_if):
			ifString(ifString), ifCondition(ifCondition), ifBlock(ifBlock), else_if(else_if){}

		SelectStmt(std::string ifString, class Expr* ifCondition, class Block* ifBlock):
			ifString(ifString), ifCondition(ifCondition), ifBlock(ifBlock){}

		void print_ast();

};

class LoopStmt:public Stmt{
	private:
		std::string whileString="";
		class Expr* whileCondition=NULL;
		class Block* whileBlock=NULL;
		std::string forString="";
		class AssignExpr* assignExpr=NULL;
		class Expr* condition=NULL;
		class IncDecExpr* incDecexpr=NULL;
		class Block* forBlock=NULL;
	public:
		LoopStmt(std::string whileString, class Expr* whileCondition, class Block* whileBlock):
			whileString(whileString), whileCondition(whileCondition), whileBlock(whileBlock){}

		LoopStmt(std::string forString, class AssignExpr* assignExpr, class Expr* condition, class IncDecExpr* incDecexpr, class Block* forBlock):
			forString(forString), assignExpr(assignExpr), condition(condition), incDecexpr(incDecexpr), forBlock(forBlock){}

		LoopStmt(std::string forString, class AssignExpr* assignExpr, class Expr* condition, class Block* forBlock):
			forString(forString), assignExpr(assignExpr), condition(condition), forBlock(forBlock){}
		void print_ast();
};



class FileOperation:public Stmt{
	private:
		std::string filereadName="";
		class FileName* filename=NULL;
		class StmtList* stmtlist=NULL;

	public:
		FileOperation(std::string filereadName, class FileName* filename,class StmtList* stmtlist):filereadName(filereadName), filename(filename), stmtlist(stmtlist){}
		FileOperation(class FileName* filename,class StmtList* stmtlist):filename(filename), stmtlist(stmtlist){}
		void print_ast();
};


#endif //!STATEMENT_HEADER