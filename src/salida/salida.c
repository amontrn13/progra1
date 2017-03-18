//#include <unistd.h>
#include "salida.h"



void createOutFile()
{
	out = fopen ("salida.tex", "w");
	
}
void writeHeader(){
	fprintf(out,"\\documentclass[12]{beamer}\n");
        fprintf(out,"\\usetheme{Oxygen}\n");
	fprintf(out,"\\usepackage{thumbpdf}\n");
	fprintf(out,"\\usepackage{wasysym}\n");
	fprintf(out,"\\usepackage{ucs}\n");
	fprintf(out,"\\usepackage[utf8]{inputenc}\n");
	fprintf(out,"\\usepackage{pgf,pgfarrows,pgfnodes,pgfautomata,pgfheaps,pgfshade}\n");
	fprintf(out,"\\usepackage{verbatim}\n\n");
	fprintf(out,"\\title{Proyecto 1 }\n");
	fprintf(out,"\\subtitle{Compiladores e intérpretes}\n");
	fprintf(out,"\\author{Luis Daniel Cordero, Mario Chinchilla Toruño y Luis Diego Vargas Arroyo}\n\n");

	fprintf(out,"\\begin{document}\n");
	fprintf(out,"\\frame{\\titlepage}\n");
	fprintf(out,"\\section{Introducción}\n");
	fprintf(out,"\\begin{frame}\n");
	fprintf(out,"  \\frametitle{Introducción}\n");
	fprintf(out,"\\end{frame}\n");
	fprintf(out,"\\end{document}\n");
	
}

int main()
{
	createOutFile();
	writeHeader();
}

