%{  
#include <stdlib.h>
#include <stdio.h>
#include "scanner.h"
%}

/*En esta sección se agregan las definiciones*/
DIGIT [0-9]
LETTER [a-zA-Z_]
OPE "+"|"-"|"*"|"/"
RW while|for|if|else //agregar las demás palabras reservadas



/*En esta sección se agregan las reglas*/
/*
   A fututro en vez de hacer un print debemos devolver el lexema, 
el tipo de token, la linea y columna donde se encuentra
incluso cuantas veces aparece en el código.
  */
%%
{RW} 						 {printf ("RESERVED_WORD");}
{LETTER}({LETTER}|{DIGIT})*  {printf ("ID ");}
{DIGIT}+"."{DIGIT}* 		 {printf ("NUMLITERAL ");}
{DIGIT}*					 {printf ("NUMLITERAL ");}
{OPE} 						 {printf ("OPERATOR ");}
<<EOF>>    					 {return EnOF;}
%%

/*
Esta sección es código C que se va a correr cuando ejecutemos a.out source.txt
*/
int main(int ac, char **av)
{
	initScanner();// crea el archivo temporal a partir de source.
	printf("File preprocessed.\n");
    /*
    Actualmente esta analizando con el source y no con el sourceTemp,
    el método para crear el archivo temporal esta en prepro.c
    */
    FILE    *fd;
    if (ac == 2)
    {
        if (!(fd = fopen(av[1], "r")))
        {
            perror("Error: ");
            return (-1);
        }
        yyset_in(fd);
        if(yylex()==EnOF)
        {
        	return 0 ;
        };
        fclose(fd);
    }
    else
        printf("Usage: a.out filename.txt\n");
    return (0);
}
