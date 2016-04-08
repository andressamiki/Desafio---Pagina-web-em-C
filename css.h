int escreverCssSobre(){
    printf("<style>");  
    printf("h1{\nwidth:auto;\ntext-align:center;\n}\n\n");
    printf("body{\nfont-family:sans-serif;\n}\n\n");
    printf("html, body,h1{\nmargin:0;\npadding:0;\n}");
    printf("h1, p a{\nbackground:#E91E63;\ncolor:#f5f5f5;\n}\n\n");
    printf("main{\nmargin-left:10px;\n}\n");
    printf("p a{\ntext-decoration:none;\npadding:5px;\nborder-radius:3px;\n}\np a:hover{\ncolor:#000;\n}\n");
    printf("ul li a{\ntext-decoration:none;\ncolor:#E91E63;\nmargin-bottom:4px;\n}\nul li a:hover{\ncolor:#000;\n}\n");
    printf("#sm{\nlist-style-type:none;\n}\n");
    printf("</style>");
}

char escreverCssform(){
    printf("<link rel='stylesheet' href='https://maxcdn.bootstrapcdn.com/bootstrap/3.3.5/css/bootstrap.min.css'>");
}