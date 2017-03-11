#include "prepro.h"

void crearArchivoTemp()
{
	FILE *temp, *fp1;
	temp = fopen ("sourceTemp.txt", "w");
	fp1 = fopen("source.txt", "r");
	char ch;
   	//clrscr();

	if (temp==NULL)
	{
		fputs ("	File error",stderr); 
	}
	else 
	{
		printf("	Temporary file 'sourceTemp'created\n");
	}

   	while (1) 
	{
      		ch = fgetc(fp1);
      		if (ch == EOF)
	        	break;
      		else
         		putc(ch, temp);
  	}
 
   printf("File copied successfully");
   fclose(temp);
   fclose(fp1);
}


