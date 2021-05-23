#include "stmt.h"

void TernaryExpr::print_ast(){
	first->print_ast();
	cout << " ? ";
	second->print_ast();
	cout << " : ";
	third->print_ast();
}

void Follow::print_ast(){
	if(expr!=NULL)
	{
		cout << "[ ";
		expr->print_ast();
		cout << " ] ";
	}
	
}

void Args::print_ast(){
	if(args!=NULL)
	{
		args->print_ast();
		cout << ", ";
		expr->print_ast();
	}	
	else if(expr!=NULL)
		expr->print_ast();
}

void AfterID::print_ast(){
	if(expr!=NULL)
	{
		cout << "[ ";
		expr->print_ast();
		cout << " ] ";
		follow->print_ast();
	}
	if(args!=NULL)
	{
		cout << "( ";
		args->print_ast();
		cout << " ) ";
	}
}

void FollowTerm::print_ast(){
	if(val!=NULL)
		val->print_ast();
	else if(variable_name!="" && afterID!=NULL)
	{
		cout << variable_name << " ";
		afterID->print_ast();
	}
	else if(variable_name!="")
	{
		cout << variable_name << " ";
		if(array==1)
			cout << "() ";
	}
	else if(expr!=NULL)
	{
		cout << "( ";
		expr->print_ast();
		cout << " ) ";
	}
}

void IncDecExpr::print_ast(){
	if(incdec!=NULL)
	{
		cout << incdec <<" "; 
	}
	else
	{
		followTerm->print_ast();
		cout << assignment_operator << " ";
		expr->print_ast();
	}
}

void AssignExpr::print_ast(){
	if(type!=NULL)
		type->print_ast();
	if(varInitialisation!=NULL)
		varInitialisation->print_ast();
	if(operation!="")
		cout << operation << " ";
	if(expr!=NULL)
		expr->print_ast();
}

void Relop::print_ast(){
	if(indicator==0)
		cout<<lteq<<" ";
	if(indicator==1)
		cout<<lt<<" ";
	if(indicator==2)
		cout<<gt<<" ";
	if(indicator==3)
		cout<<gteq<<" ";
	if(indicator==4)
		cout<<dbleq<<" ";
	if(indicator==5)
		cout<<noteq<<" ";
}

void Mulop::print_ast(){
	if(mulOperations!="")
		cout << mulOperations << " ";
}

void Term::print_ast(){
	if(term!=NULL)
		term->print_ast();
	if(mulop!=NULL)
		mulop->print_ast();
	if(followTerm!=NULL)
		followTerm->print_ast();
}

void Sumop::print_ast(){
	if(plusOrMinus!="")
		cout << plusOrMinus << " ";
}

void SumExpr::print_ast(){
	if(sumexpr!=NULL)
		sumexpr->print_ast();
	if(sumop!=NULL)
		sumop->print_ast();
	if(term!=NULL)
		term->print_ast();
}

void RelExpr::print_ast(){
	if(sum_exprleft!=NULL)
		sum_exprleft->print_ast();
	if(relop!=NULL)
		relop->print_ast();
	if(sum_exprright!=NULL)
		sum_exprright->print_ast();
}

void NotExpr::print_ast(){
	if(notOperation!="")
	{
		cout << notOperation << " ";
		not_expr->print_ast();
	}	
	else if(rel_expr!=NULL)
		rel_expr->print_ast();
}

void AndExpr::print_ast(){
	if(andexpr!=NULL)
		andexpr->print_ast();
	if(andop!="")
		cout << andop << " ";
	if(not_expr!=NULL)
		not_expr->print_ast();
}

void SimpleExpr::print_ast(){
	if(simple_expr!=NULL)
		simple_expr->print_ast();
	if(orop!="")
		cout << orop << " ";
	if(and_expr!=NULL)
		and_expr->print_ast();
}

void Expr::print_ast(){
	if(inc_dec!=NULL)
		inc_dec->print_ast();
	else if(simple_expr!=NULL)
		simple_expr->print_ast();
	else if(ternaryExpr!=NULL)
		ternaryExpr->print_ast();
}

void ExprStmt::print_ast(){
	if(expr!=NULL)
		expr->print_ast();
	cout << " ;" <<endl;
}

void ReturnStmt::print_ast(){
	cout << "return ";
	if(exprstmt!=NULL)
		exprstmt->print_ast();
}

void ElseIf::print_ast(){
	if(else_ifString!="")
		cout << else_ifString << " ( ";
	if(else_ifCondition!=NULL)
	{
		else_ifCondition->print_ast();
		cout << " ) ";
	}
	if(else_ifBlock!=NULL)
		else_ifBlock->print_ast();
	if(else_if!=NULL)
		else_if->print_ast();
	if(elseString!="")
		cout << elseString << " ";
	if(elseBlock!=NULL)
		elseBlock->print_ast();
}

void SelectStmt::print_ast(){
	if(ifString!="")
		cout << ifString << " ";
	if(ifCondition!=NULL)
	{
		cout << " ( ";
		ifCondition->print_ast();
		cout << " ) "<<endl;
	}
	if(ifBlock!=NULL)
		ifBlock->print_ast();
	if(elseString!="")
		cout << elseString <<endl;
	if(elseBlock!=NULL)
		elseBlock->print_ast();
	if(else_if!=NULL)
		else_if->print_ast();
}

void LoopStmt::print_ast(){
	if(whileString!="")
		cout << whileString << " ";
	if(whileCondition!=NULL)
	{
		cout << " ( ";
		whileCondition->print_ast();
		cout << " ) "<<endl;
	}
	if(whileBlock!=NULL)
		whileBlock->print_ast();
	if(forString!="")
		cout << forString << " ";
	if(assignExpr!=NULL)
	{
		cout << " ( ";
		assignExpr->print_ast();
		cout << " ; ";
	}
	if(condition!=NULL)
	{
		condition->print_ast();
		cout << " ; ";
	}
	if(incDecexpr!=NULL)
		incDecexpr->print_ast();
	if(forBlock!=NULL)
	{
		cout << " ) "<<endl;
		forBlock->print_ast();
	}
	cout << endl;
}

void FileOperation::print_ast(){
	if(filereadName!="")
	{
		cout <<"fileRead "<< filereadName << " = read (";
	}
	else
	{
		cout << "fileWrite write ( ";
	}
	if(filename!=NULL)
	{
		filename->print_ast();
		cout << " );"<<endl;
	}
	if(stmtlist!=NULL)
	{
		stmtlist->print_ast();
		cout << " close ( ";
		filename->print_ast();
		cout << " );"<<endl;
	}
}

void VarDecList::print_ast(){
	if(vardeclistleft!=NULL)
	{
		vardeclistleft->print_ast();
		cout << "," ;
		vardeclistright->print_ast();
	}
	if(varinit!=NULL)
		varinit->print_ast();
	if( equalto!="")
		cout << equalto << " ";
	if(array!=NULL)
		array->print_ast();
	if(expr!=NULL)
		expr->print_ast();
}