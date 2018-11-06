%{
	#include "y.tab.h"
	#include <stdlib.h>
	#include <stdio.h>	
	int lines = 1;
	void yyerror(char *);
	extern int yylineno;
%}
%option yylineno

pre_decleration  (\<)
read  (read)
write  (write)
type  (Set)
ret  (return)
beg  (begin)
bre  (break)
comment  (\#)
comment_b_s  (\/\*)
comment_b_e  (\*\/)
func_call  (func)
sign [+-]
letter 		[A-Za-z]
digit 		[0-9]
alphanumeric 	({letter}|{digit})
char	 	[^alphanumeric|comment|pre_decleration|sign|\ ]
all  (.)

%%

{type}					 return( SET);
\List                                    return(  LIST);
\n 			 	        {printf(" L%d %s \n",lines,yytext);lines++;};
\[ 			 	     	 return( SUB_SET);
\!\[ 			 		 return( NOT_SUB_SET);
\] 			 	  	 return( SUP_SET);
\!\]	 		 		 return( NOT_SUP_SET);
\"                                       return( QUOTE);
\=	 	 	 	 	 return( ASSIGN_OP);
\&			 	 	 return( AND);
\TRUE          	 	 	  	 return(TRUE);
\FALSE					 return(FALSE);
{ret}	  		 		 return( RETURN);
{bre}	  		 		 return( BREAK);
\continue		 	         return( CONTINUE);
\,			 	 	 return( COMMA);
\const			 	 	 return( CONSTANT);
\'			 	 	 return( COMPLEMENT);
\*			 	 	 return( CARTESIAN_PRODUCT);
\else	 		  		 return( ELSE);
\=\=			 	 	 return( EQUALS);
\!\=			 		 return( NOT_EQUALS);
\Set[ \t]+{func_call}[ \t]+{alphanumeric}+      return( FUNCTION_DECLERATION);
{func_call}[ \t]+{alphanumeric}+   	 return( FUNCTION_CALL);
\^			 		 return( INTERSECTION);
\if			  	         return( IF);
\(			  		 return( LB);
\{			    		 return( LCB);
\!			  		 return( NOT);
\while			  	  	 return( WHILE);
\|			     		 return( OR);
\)			      		 return( RB);
\}			 	 	 return( RCB);
{read}			  		 return( SCANNER);
\-			    		 return( SUBSTRACTION);
\;			 		 return( SEMICOLON);
\+			  		 return( UNION);
{sign}?{digit}	                         return(  DIGIT);
{sign}?{digit}*		    	  	 return( INTEGER);
\Set[ \t]+{pre_decleration}{alphanumeric}+      return( VARIABLE_DECLERATION );
{pre_decleration}{alphanumeric}+         return( VARIABLE );
\List[ \t]+\>{alphanumeric}+	         return( ARRAY_DEC);
\>{alphanumeric}+              	         return( ARRAY);
{write}				 	 return( PRINT);
[char|letter]			 	 return( CHAR);
{letter}({alphanumeric}|_)*	   	 return( IDENTIFIER);
{all}   ;/*do nothing*/ 
{comment_b_s}({all})*{comment_b_e} 	 return( B_COMMENT);
{comment}{all}*	 		  	 return( COMMENT);


%%

int yywrap(void){
	return 1;
}