#ifndef SCANNER_H
#define SCANNER_H
#include <stdio.h>

//Tokens
#define EnOF -1

typedef enum token_types 
{
	RESERVED_WORD, END, READ, WRITE, ID, NUMLITERAL, STRLITERAL,
	LPAREN, RPAREN, SEMICOLON, COMMA, ASSIGNOP,
	PLUSOP, MINUSOP, SCANEOF
} token;

void initScanner(FILE *file);


#endif /* SCANNER_H */