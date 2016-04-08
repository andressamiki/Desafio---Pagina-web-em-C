#include <stdio.h>  
#include <stdlib.h> 
#include "css.h"


 int main(void){
    char *data;
    long m,n;
    
    
    
    printf("%s%c%c\n","Content-Type:text/html;charset=iso-8859-1",13,10); //especificar a codificação de caracteres
    printf("<html><head><meta charset='UTF-8'>\n<title> Desafio </title>\n"),escreverCssform();
    printf("</head>\n<body class='container'>\n");
    printf("<h1 class='rosa'>Multiplique!</h1>\n<hr>\n");
    //HTML
    
    
    
    //Especificadores de conversão
    //%d	Número decimal inteiro (int).
    //%ld   long int
    
    
    data = getenv("QUERY_STRING");  
    //obtém uma variável de ambiente
    //variavel de ambiente para method get padrão
    //Se for post precisa usar CONTENT_LENGTH


    if(data == NULL) 
        printf("<h4>Insira valores ");
    else if(sscanf(data,"m=%ld&n=%ld",&m,&n)!=2) 
            printf("<h4>Insira outro valor para que a multiplicação seja feita");
        else
            printf("<h3>Resultado:</h3>\n");
            printf("<h4>%ld",m*n);
    
            
    printf("</h4>");
    printf("<a href='/template.html'><button class='btn back'> Voltar </button></a>\n");
    printf("</body>\n</html>");
 }