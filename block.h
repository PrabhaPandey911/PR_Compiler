#ifndef BLOCK_HEADER
#define BLOCK_HEADER

#include "ast_node.h"
class Expr;
class VarDecList:public AstNode{
	private:
		class VarDecList* vardeclistleft=NULL;
		class VarDecList* vardeclistright=NULL;
		class VarInit *varinit=NULL;
		class Array *array=NULL;
		class Expr *expr=NULL;
		std::string equalto="";
	public:
		VarDecList(class VarDecList* vardeclistleft,class VarDecList* vardeclistright):vardeclistleft(vardeclistleft),vardeclistright(vardeclistright){}
		VarDecList(class VarInit *varinit):varinit(varinit){}
		VarDecList(class VarInit *varinit, std::string equalto, class Array *array):varinit(varinit),equalto(equalto),array(array){}
		VarDecList(class VarInit *varinit, std::string equalto,class Expr *expr):varinit(varinit),equalto(equalto),expr(expr){}

		void print_ast();
};

class Vartype:public AstNode{
	private:
		std::string vartype;
	public:
		Vartype(std::string type);
		void print_ast();
};

class Vardec:public AstNode{
	private:
		/*type of the variable*/
		class Vartype* type_of_variable;
		class VarDecList*  variable_list;
	public:
		Vardec(class Vartype* type_of_variable, class VarDecList* variable_list):type_of_variable(type_of_variable),variable_list(variable_list){ }
		void print_ast();
};

class VarInit:public AstNode{
private:
	std::string variable_name;
	int one_d_array=0;
	std::string oneD_arg_name="";
	int oneD_arg_value=-1;
	int two_d_array=0;
	std::string twoD_arg1_name="";
	std::string twoD_arg2_name="";
	int twoD_arg1_value=-1;
	int twoD_arg2_value=-1;

public:
	//varinit->VARIABLE_NAME
	VarInit(std::string variable_name):variable_name(variable_name){ }

	//varinit -> VARIABLE_NAME[] | VARIABLE_NAME[][]
	VarInit(std::string varname,int onedarray,int twodarray){
		variable_name = varname;
		one_d_array = onedarray;
		two_d_array = twodarray;
	}

	//varinit -> VARIABLE_NAME[VARIABLE_NAME] | VARIABLE_NAME[][VARIABLE_NAME]
	VarInit(std::string varname,int onedarray,int twodarray,std::string argName)
	{
		variable_name = varname;
		one_d_array = onedarray;
		two_d_array = twodarray;
		if(one_d_array==1)
			oneD_arg_name = argName;
		else
			twoD_arg2_name = argName;

	}

	//varinit -> VARIABLE_NAME[UNSIGNED_INT] | VARIABLE_NAME[][UNSIGNED_INT]
	VarInit(std::string varname,int onedarray,int twodarray,int argValue)
	{
		variable_name = varname;
		one_d_array = onedarray;
		two_d_array = twodarray;
		if(one_d_array==1)
			oneD_arg_value = argValue;
		else
			twoD_arg2_value = argValue;
	}
	
	//varinit -> VARIABLE_NAME[VARIABLE_NAME][VARIABLE_NAME]
	VarInit(std::string varname,std::string argName1,std::string argName2)
	{
		two_d_array=1;
		variable_name = varname;
		twoD_arg1_name = argName1;
		twoD_arg2_name = argName2;
	}
	//varinit -> VARIABLE_NAME[UNSIGNED_INT][UNSIGNED_INT]
	VarInit(std::string varname,int argValue1,int argValue2,int twodarray,int temp)
	{
		variable_name = varname;
		two_d_array = twodarray;
		twoD_arg1_value = argValue1;
		twoD_arg2_value = argValue2;
	}
	void print_ast();
};

class Boolval:public AstNode{
private:
	bool value;
public:
	Boolval(std::string value_passed){
		if(value_passed=="True")
			value = true;
		else
			value = false;
	 }
	 void print_ast();
};

class Values:public AstNode{
private:
	unsigned long unsigned_int;
	long long signed_int;
	class Boolval* boolval;
	char charval;
	std::string str_value;
	int indicator=-1;

public:
	Values(class Boolval* boolval):boolval(boolval){}
	Values(std::string value,int ind)
	{
		indicator=ind;
		if(indicator==0)
		{
			unsigned_int = std::stoul(value,nullptr,10);
		}
		if(indicator==1)
		{
			value=value.substr(2);
			signed_int = std::stoll(value,nullptr,10);
		}
		if(indicator==3)
		{
			charval = value[0];
		}
		if(indicator==4)
		{
			str_value = value;
		}
	}
	void print_ast();

};

class Element:public AstNode{
private:
	class Values* val=NULL;
	std::string variable_name="";
	class Element* elementleft=NULL;
	class Element* elementright=NULL;
public: 
	Element()=default;
	Element(class Values* val):val(val){ }
	Element(std::string variablename){
		variable_name = variablename;
	 }
	Element(class Element* elementleft,class Values* val):elementleft(elementleft),val(val){}
	Element(class Element* elementleft,class Element* elementright):elementleft(elementleft),elementright(elementright){}
	void print_ast();

};

class Array:public AstNode{
private:
	class Element* elem;
public:
	Array()=default;
	Array(class Element* elem):elem(elem){ }
	void print_ast();
};

class FileName:public AstNode{
private:
	char* filename;
public:
	FileName(char* filename):filename(filename){ }
	void print_ast();
};

class Import:public AstNode{
private:
	class FileName* filename=NULL;
	class Import* import=NULL;
public:
	Import()=default;
	Import(class FileName* filename):filename(filename){}
	Import(class FileName* filename,class Import* import):filename(filename),import(import){}
	void print_ast();
};

class Stmt:public AstNode{
public:
	Stmt()=default;
	virtual void print_ast(){
	}
};

class StmtList:public AstNode{
private:
	class StmtList* stmtlist=NULL;
	class Stmt* stmt=NULL;
public:
	StmtList(class Stmt* stmt):stmt(stmt){}
	StmtList(class StmtList* stmtlist,class Stmt* stmt):stmtlist(stmtlist),stmt(stmt){}
	void print_ast();

};

class Declist;

class BlockStmts:public AstNode{
private:
	class Declist* declist=NULL;
	class StmtList* stmtlist=NULL;
public:
	BlockStmts()=default;
	BlockStmts(class Declist *declist,class StmtList* stmtlist):declist(declist),stmtlist(stmtlist){ }
	BlockStmts(class StmtList* stmtlist):stmtlist(stmtlist){ }
	void print_ast();
};

class Block:public AstNode{
private:
	class BlockStmts* blockStmts=NULL;
public:
	Block(class BlockStmts* blockStmts):blockStmts(blockStmts){ }
	void print_ast();
};

class ArgType:public AstNode{
	private:
		class Vartype* type;
		std::string variable_name;
		std::string argName="";
		int argValue=-1;
	public:
		//arg_type->type ID | type ID[]
		ArgType(class Vartype* type,std::string variable_name):type(type),variable_name(variable_name){}

		//arg_type->type ID [] [ID]
		ArgType(class Vartype* type,std::string variable_name,std::string argName):type(type),variable_name(variable_name),argName(argName){}

		//arg_type->type ID [] [Unsigned_int]
		ArgType(class Vartype* type,std::string variable_name,int argValue):type(type),variable_name(variable_name),argValue(argValue){}
		void print_ast();
};

class ParamList:public AstNode{
private:
	class ArgType* argType=NULL;
	std::string comma="";
	class ParamList* paramslist=NULL;
public:
	ParamList()=default;
	ParamList(class ArgType* argType):argType(argType){}
	ParamList(class ArgType* argType,std::string comma,class ParamList* paramslist):argType(argType),comma(comma),paramslist(paramslist){}
	void print_ast();
};

class Params:public AstNode{
private:
	class ParamList* paramslist;
public:
	Params(class ParamList* paramslist):paramslist(paramslist){ }
	void print_ast();
};

class ReturnType:public AstNode{
private:
	std::string voidToken="";
	class Vartype* type=NULL;//return_type->type[] | type[][]
	int dimension = 0;
	
public:
	ReturnType(std::string voidToken):voidToken(voidToken){}
	ReturnType(class Vartype* type,int dimension):type(type),dimension(dimension){}
	void print_ast();
};

class Fundec:public AstNode{
private:
	class Vartype* type=NULL;
	std::string functionName;
	class Params* params;
	class Block* block;
	class ReturnType* returnType=NULL;
public:
	Fundec(class Vartype* type,std::string functionName,class Params* params,class Block* block):type(type),functionName(functionName),params(params),block(block){ }
	Fundec(class ReturnType* returnType,std::string functionName,class Params* params,class Block* block):type(type),functionName(functionName),params(params),block(block){ }
	void print_ast();
};

class Dec:public AstNode{
private:
	class Vardec* vardec=NULL;
	class Fundec* fundec=NULL;
public:
	Dec(class Vardec* vardec):vardec(vardec){}
	Dec(class Fundec* fundec):fundec(fundec){}
	void print_ast(){
		if(vardec!=NULL)
			vardec->print_ast();
		else if(fundec!=NULL)
			fundec->print_ast();
	}	
};

class Declist:public AstNode{
private:
	class Declist* declist=NULL;
	class Dec* dec=NULL;
public:

	Declist(class Declist* declist,class Dec* dec):declist(declist),dec(dec){}
	Declist(class Dec* dec):dec(dec){}
	void print_ast(){
		if(declist!=NULL)
			declist->print_ast();
		if(dec!=NULL)
			dec->print_ast();
	}
};

class Choose:public AstNode{
private:
	class Declist* declist=NULL;
	class Block* block=NULL;
	class StmtList* stmtlist=NULL;
public:
	Choose(class Declist* declist):declist(declist){}
	Choose(class Block* block):block(block){}
	Choose(class StmtList* stmtlist):stmtlist(stmtlist){}
	void print_ast(){
		if(declist!=NULL)
			declist->print_ast();
		else if(block!=NULL)
			block->print_ast();
		else if(stmtlist!=NULL)
			stmtlist->print_ast();
	}
};

#endif // !BLOCK_HEADER