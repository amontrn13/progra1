%{  
#include <stdlib.h>
#include <stdio.h>
%}

digit [0-9]
ID [a-z][a-z0-9]*

%%

{ID} 			 {printf ("ID");}
{digit}+         {printf ("NUMBER");}

%%
main()
{
	yylex();
}
