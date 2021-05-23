%{
	#include "goal.h"
	#include "parser.tab.hh"
	#define YY_DECL extern "C" int yylex()
%}


DIGIT [0-9]
ID 	  _{0,1}[a-zA-Z][a-zA-Z0-9]*

%%
[\t\n]				{/*eat up white spaces */}
import				{ return IMPORT;}
unsigned_int   		{ yylval.value = strdup(yytext); return UNSIGNED_INT; }
unsigned_long		{ yylval.value = strdup(yytext); return UNSIGNED_LONG; }
string 				{ yylval.value = strdup(yytext); return STRING;} 
fileRead 			{ return FILEREAD;}
fileWrite			{ return FILEWRITE;}
int			  { yylval.value = strdup(yytext); return INT; }
bool		  { yylval.value = strdup(yytext); return BOOL; }
char		  { yylval.value = strdup(yytext); return CHAR; }
void			{ yylval.value = strdup(yytext); return VOID; }
long			{ yylval.value = strdup(yytext); return LONG; }
return		{ yylval.value = strdup(yytext); return RETURN; }
for				{ yylval.value = strdup(yytext); return FOR; }
while			{ yylval.value = strdup(yytext); return WHILE; }
break 		{ yylval.value = strdup(yytext); return BREAK; }
if					{ yylval.value = strdup(yytext); return IF; }
else			{ yylval.value = strdup(yytext); return ELSE; }
elseif		{ yylval.value = strdup(yytext); return ELSEIF; }
read			{ yylval.value = strdup(yytext); return READ; }
write			{ yylval.value = strdup(yytext); return WRITE; }
close 		{ yylval.value = strdup(yytext); return CLOSE; }
True			{ yylval.value = strdup(yytext); return TRUE; }
False			{ yylval.value = strdup(yytext); return FALSE; }
continue		{ yylval.value = strdup(yytext); return CONTINUE; }
{DIGIT}+				{yylval.value = strdup(yytext); return UNSIGNED_INT_VALUE;} 
[U][-]{0,1}{DIGIT}+		{yylval.value = strdup(yytext); return SIGNED_INT_VALUE; }
[\'].[\']				{yylval.value = strdup(yytext); return CHAR_VALUE; }
\"(\\.|[^\"])*\"           {yylval.value = strdup(yytext); return STRING_VALUE; }
_{0,1}[a-zA-Z][a-zA-Z0-9]*  {yylval.value = strdup(yytext); return VARIABLE_NAME; }
[\?]					{ return QUESTION_MARK; }
[:]					{ return COLON; }
[,]						{ return COMMA;} 
[(]						{ return OPN_BRKT; }
[)]						{ return CLOSE_BRKT; }
[\[]					{ return OPN_SQ_BRKT; }
[\]]					{ return CLOSE_SQ_BRKT; }
[{]						{ return OPN_CURLY_BRKT; }
[}]						{ return CLOSE_CURLY_BRKT; }
[;]						{ return SEMICOLON; }
[<][=]					{ yylval.value = strdup(yytext); return LTEQ; }
[>][=]					{ yylval.value = strdup(yytext); return GTEQ; }
[<]						{ yylval.value = strdup(yytext); return LT; }
[>]						{ yylval.value = strdup(yytext); return GT; }
[=][=]					{ yylval.value = strdup(yytext); return DBL_EQ; }
[+][=]					{ yylval.value = strdup(yytext); return PLUS_EQ; }
[-][=]					{ yylval.value = strdup(yytext); return MINUS_EQ; }
[*][=]					{ yylval.value = strdup(yytext); return MULTIPLY_EQ; }
[/][=]					{ yylval.value = strdup(yytext); return DIVIDE_EQ; }
[%][=]					{ yylval.value = strdup(yytext); return MODULO_EQ; }
_{0,1}[a-zA-Z][a-zA-Z0-9]*[+][+]					{ yylval.value = strdup(yytext); return POSTINC; }
_{0,1}[a-zA-Z][a-zA-Z0-9]*[-][-]					{ yylval.value = strdup(yytext); return POSTDEC; }
[+][+]_{0,1}[a-zA-Z][a-zA-Z0-9]*					{ yylval.value = strdup(yytext); return PREINC; }
[-][-]_{0,1}[a-zA-Z][a-zA-Z0-9]*					{ yylval.value = strdup(yytext); return PREDEC; }
[+] 					{ yylval.value = strdup(yytext); return PLUS; }
[-]						{ yylval.value = strdup(yytext); return MINUS; }
[*]						{ yylval.value = strdup(yytext); return MULTIPLY; }
[/]						{ yylval.value = strdup(yytext); return DIVIDE; }
[%] 					{ yylval.value = strdup(yytext); return MODULO; }
[!][=]					{ yylval.value = strdup(yytext); return NOT_EQ; }
[=]						{ yylval.value = strdup(yytext); return EQ;}
[~]						{ yylval.value = strdup(yytext); return NOT; }
[|][|]					{ yylval.value = strdup(yytext); return OR; }
[&][&]					{ yylval.value = strdup(yytext); return AND; }

%%

