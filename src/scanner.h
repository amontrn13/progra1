#ifndef SCANNER_H
#define SCANNER_H


//Tokens
//#define ID 1

typedef enum token_types 
{
	RESERVED_WORD, END, READ, WRITE, ID, NUMLITERAL, STRLITERAL,
	LPAREN, RPAREN, SEMICOLON, COMMA, ASSIGNOP,
	PLUSOP, MINUSOP, SCANEOF
} token;

void initScanner(void);


#endif /* SCANNER_H */