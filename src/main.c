#include <stdio.h>
//#include <unistd.h>
#include "prepro.h"


typedef enum token_types 
{
	BEGIN, END, READ, WRITE, ID, INTLITERAL, 
	LPAREN, RPAREN, SEMICOLON, COMMA, ASSIGNOP,
	PLUSOP, MINUSOP, SCANEOF
} token;


int main(int argc, char const *argv[])
{
	printf("Iniciando análisis léxico\n");
	//se llama al preprocesador
	crearArchivoTemp();

    return 0;
}
