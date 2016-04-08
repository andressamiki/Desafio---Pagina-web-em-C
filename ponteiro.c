#include <stdio.h>
#include "funcPonteiro.h"

int main(){
    printf("Content-type: text/html\n\n");
    printf("<html><head><meta charset='UTF-8'><title> Projeto em CGI </title><link href=\"../css/style.css\" rel=\"stylesheet\" type=\"text/css\"></head></body>");
    printf("<h1> Manipulando Ponteiro </h1>");
    printf("<main> <a href='https://project-c-renataalberti.c9users.io/cgi-bin/sobre.cgi' title='sobre'> Sobre </a>"),manipularPonteiro();
    printf("</main><footer> Andressa Miki - Renata Alberti </footer></body></html>");
}

