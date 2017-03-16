%{  
#include <stdlib.h>
#include <stdio.h>
#include "scanner.h"
#include "prepro.h"
%}

DIGIT [0-9]
LETTER [a-zA-Z_]
OPE "+"|"-"|"*"|"/"
RW while|for|if|else  

%%
{RW} 				         {printf ("RESERVED_WORD");}
{LETTER}({LETTER}|{DIGIT})*  {printf ("ID ");}
{DIGIT}+"."{DIGIT}* 		 {printf ("NUMLITERAL ");}
{DIGIT}*					 {printf ("NUMLITERAL ");}
{OPE} 						 {printf ("OPERATOR ");}
<<EOF>>    					 {return EnOF;}
%%


int main(int ac, char *av[])
{
    FILE   *fd, *tmp;
    char *fileName;
    if (ac != 2)
    {
    	printf("Usage: a.out filename.txt\n");
    	return (0); 
    }
    else
    {
    	if (!(fd = fopen(av[1], "r")))
        {
            perror("Error: ");
            return (-1);
        }
        else
        {
        	//Crea el archivo temporal a partir de source.
	        fclose(fd);
	        //initScanner(fd);
			printf("Init prepocess...\n");
			//Se llama al preprocesador
			createTempFile(fd);
			printf("Input file preprocessed.\n");
			tmp = getTempFile();
			yyin = fopen( "sourceTemp.txt", "r" );
	        if(yylex()==EnOF)
	        {
	        	return 0 ;
	        }
        }
    }
        
}
