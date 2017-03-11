%{  
#include <stdlib.h>
#include <stdio.h>
#include "scanner.h"
%}

DIGIT [0-9]
LETTER [a-zA-Z_]
OPE "+"|"-"|"*"|"/"
RW while|for|if|else


%%
{RW} 						 {printf ("RESERVED_WORD");}
{LETTER}({LETTER}|{DIGIT})*  {printf ("ID ");}
{DIGIT}+"."{DIGIT}* 		 {printf ("NUMLITERAL ");}
{DIGIT}*					 {printf ("NUMLITERAL ");}
{OPE} 						 {printf ("OPERATOR ");}
<<EOF>>    					 {printf ("End of file");}
%%

int main(int ac, char **av)
{
	initScanner();
	printf("File preprocessed.\n");
    
    FILE    *fd;
    if (ac == 2)
    {
        if (!(fd = fopen(av[1], "r")))
        {
            perror("Error: ");
            return (-1);
        }
        yyset_in(fd);
        yylex();
        fclose(fd);
    }
    else
        printf("Usage: a.out filename\n");
    return (0);
}
