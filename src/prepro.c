#include "prepro.h"

//la variable temp fue declara en header

void createTempFile(FILE *file)
{
	temp = fopen ("sourceTemp.txt", "w");
	file = fopen("source.txt", "r");
	char ch;
   	//clrscr();

	if (temp==NULL)
	{
		fputs ("	File error\n",stderr); 
	}
	else 
	{
		printf("Temporary file 'sourceTemp'created\n");
	}

   	while (1) 
	{
      		ch = fgetc(file);
      		if (ch == EOF)
	        	break;
      		else
         		putc(ch, temp);
  	}
 
   printf("Source file copied successfully\n");
   fclose(temp);
   fclose(file);
}

FILE* getTempFile()
{
	return temp;
}


