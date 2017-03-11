%{  
#include <stdlib.h>
#include <stdio.h>
#include "scanner.h"
%}

digit [0-9]
ID [a-z][a-z0-9]*

%%

{ID} 			 {printf ("ID");}
{digit}+         {printf ("NUMBER");}

%%
int main(void)
{	printf("incia");
	initScanner();
	printf("termina\n");
	printf("Ingrese una secuencia de dígitos\n");
	yylex();
    return 0;
}
