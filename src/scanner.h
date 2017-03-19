#ifndef SCANNER_H
#define SCANNER_H
#include <stdio.h>

//Tokens
#define EnOF -1

typedef enum token_types 
{
	RESERVED_WORD, ID, NUMLITERAL, STRLITERAL,
	OPERATOR, 
} tkn_type;

typedef struct tokens
{
	int tokenCode;
	tkn_type type;
	int *lexemePointer;
	int line;
	int lexemeValue;
	int column; 
}token;

void initScanner(FILE *file);


#endif /* SCANNER_H */
