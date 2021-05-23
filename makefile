parsing_output: scanner.ll parser.yy 

	flex scanner.ll
	bison -v -d parser.yy
# 	g++ -g -o parsing_output parser.tab.cc lex.yy.c ast_node.cpp -ll

	g++ -g -o parsing_output goal.cpp block.cpp stmt.cpp parser.tab.cc lex.yy.c -lfl

clean:
	rm parsing_output parser.tab.cc lex.yy.c parser.tab.hh parser.output