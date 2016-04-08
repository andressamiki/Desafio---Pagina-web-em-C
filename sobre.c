#include <stdio.h>
#include "css.h"

int main(){
    printf("Content-type: text/html\n\n");
    printf("<!DOCTYPE html> <html><head><meta charset='UTF-8'><title> Sobre </title>"), escreverCssSobre();
    printf("</head><body>  <h1> Sobre </h1> <main>");
    printf("<p><a href='https://project-c-renataalberti.c9users.io/cgi-bin/ponteiro.cgi' title='voltar'> Voltar </a></p><br>");
    printf("<ul><li id='sm'> Referências: </li>");
    printf("<li><a href=' http://www.devmedia.com.br/programacao-web-em-c-entendendo-cgi/22388' title='Entendendo CGI'> Entendendo CGI  </a></li>");
    printf("<li><a href='https://community.c9.io/t/running-a-python-cgi-server/1602' title='Configuração CGI'> Configuração CGI  </a></li>");
    printf("<li><a href='https://www.cs.tut.fi/~jkorpela/forms/cgic.html' title='Forms em C'> Forms em C  </a></li>");
    printf("<li><a href='http://httpd.apache.org/docs/current/howto/cgi.html' title='Apache CGI'> Apache CGI  </a></li>");
    printf("<li><a href='https://www.jmarshall.com/easy/cgi/portuguese/' title='script CGI'> Script CGI  </a></li>");
    printf("<li><a href='http://programando-ads.blogspot.com.br/2012/02/para-que-servem-as-bibliotecas-e.html' title='Bibliotecas C'> Bibliotecas C  </a></li>");
    printf("<li><a href='http://www.ime.usp.br/~pf/algoritmos/aulas/pont.html' title='endereços e ponteiros'> Endereços e ponteiros </a></li>");
    printf("<li><a href='http://wiki.icmc.usp.br/images/b/b4/Ponteiros.pdf' title='ponteiros'> Ponteiros  </a></li></ul>");
    printf("</main> </body> </html>");
}