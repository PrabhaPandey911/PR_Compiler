#include "block.h"

Vartype::Vartype(std::string type)
{
	this->vartype = type;
}

void Vartype::print_ast(){
	cout << vartype <<" ";
}

void Vardec::print_ast(){
	type_of_variable->print_ast();
	variable_list->print_ast();
	cout << ";" << endl;
}

void VarInit::print_ast(){
	if(one_d_array==0 && two_d_array==0)
		cout << variable_name <<" ";
	else if(one_d_array!=0 && oneD_arg_name!="")
		cout << variable_name << " [ "<< oneD_arg_name << " ] ";
	else if(one_d_array!=0 && oneD_arg_name=="")
		cout << variable_name << " [] ";
	else if(two_d_array!=0 && twoD_arg1_name=="" && twoD_arg2_name=="")
		cout << variable_name << " [][] ";
	else if(two_d_array!=0 && twoD_arg2_name!="" && twoD_arg1_name=="")
		cout << variable_name << " [ ]["<< twoD_arg2_name << " ]";
	else if(one_d_array!=0 && oneD_arg_value!=-1)
		cout << variable_name << " [ "<< oneD_arg_value << " ] ";
	else if(two_d_array!=0 && twoD_arg2_value!=-1 && twoD_arg1_value==-1)
		cout << variable_name << " []["<< twoD_arg2_value << "]";
	else if(two_d_array!=0 && twoD_arg2_name!="" && twoD_arg1_name!="")
		cout << variable_name << " [ "<< twoD_arg1_name << " ] [ "<<twoD_arg2_name<<" ]";
	else if(two_d_array!=0 && twoD_arg1_value!=-1 && twoD_arg2_value!=-1)
		cout << variable_name << " [ "<< twoD_arg1_value << " ] [ "<<twoD_arg2_value<<" ]";

}

void Boolval::print_ast(){
	cout << value << " ";
}

void Values::print_ast(){
	if(indicator==0)
	{
		cout<<unsigned_int<<" ";
	}
	if(indicator==1)
	{
		cout<<signed_int<<" ";
	}
	if(indicator==3)
	{
		cout << charval <<" ";
	}
	if(indicator==4)
	{
		cout << str_value << " ";
	}
	if(indicator==-1)
	{
		boolval->print_ast();
	}
}

void Element::print_ast(){
	if(elementleft!=NULL && val!=NULL)
	{
		elementleft->print_ast();
		cout << " , " ;
		val->print_ast();
	}
	else if(elementleft!=NULL && elementright!=NULL)
	{
		cout << "{ ";
		elementleft->print_ast();
		cout << " }, { ";
		elementright->print_ast();
		cout << "} ";
	}
	else if(val!=NULL)
		val->print_ast();
	else if(variable_name!="")
		cout << variable_name << " ";
		
}

void Array::print_ast(){
	elem->print_ast();
}

void FileName::print_ast(){
	cout << filename << " ";
}

void Import::print_ast(){
	if(filename!=NULL)
	{	
		filename->print_ast();
		cout << endl;
	}
	if(import!=NULL)
		import->print_ast();
}

void StmtList::print_ast(){
	if(stmtlist!=NULL)
		stmtlist->print_ast();
	if(stmt!=NULL)
		stmt->print_ast();
}

void BlockStmts::print_ast(){
	if(declist!=NULL)
		declist->print_ast();
	if(stmtlist!=NULL)
		stmtlist->print_ast();
	cout << "} "<<endl;
}

void Block::print_ast(){
	cout << "{ "<<endl;
	if(blockStmts!=NULL)
		blockStmts->print_ast();
}

void ArgType::print_ast(){
	type->print_ast();
	cout << variable_name <<" ";
	if(argName!="")
		cout << "[]["<<argName << "] ";
	else if(argValue!=-1)
		cout << "[]["<<argValue << "] ";
}


void ParamList::print_ast(){
	if(argType!=NULL && paramslist==NULL)
		argType->print_ast();
	else if(argType!=NULL && paramslist!=NULL){
		argType->print_ast();
		cout << comma << " ";
		paramslist->print_ast();
	}
	cout << " ";
}

void Params::print_ast(){
	paramslist->print_ast();
}

void ReturnType::print_ast(){
	if(voidToken!="")
		cout << voidToken <<endl;
	else if(type!=NULL)
	{
		type->print_ast();
		if(dimension==1)
			cout << "[] ";
		if(dimension==2)
			cout << "[][] ";
	}
}

void Fundec::print_ast(){
	if(type!=NULL)
		type->print_ast();
	else if(returnType!=NULL)
		returnType->print_ast();
	cout << functionName << " ( ";
	params->print_ast();
	cout << " ) "<<endl;
	block->print_ast();
}