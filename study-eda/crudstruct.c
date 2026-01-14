#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro {
    char titulo[100];
    unsigned int num_paginas;#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro {
    char titulo[100];
    unsigned int num_paginas;
    float preco;
}Livro;

//construtor para livro
Livro* create_livro(const char *titulo, unsigned int num_paginas, float preco){
    Livro* livro =(Livro*) calloc(1,sizeof(Livro));
    strcpy(livro -> titulo, titulo);
    livro -> num_paginas = num_paginas;
    livro -> preco = preco;
    return livro;
}
void update_livro(Livro *livro, const char *titulo, unsigned int num_paginas, float preco){
    strcpy (livro->titulo, titulo);
    livro -> num_paginas = num_paginas;
    livro -> preco = preco;

}

void print_livro(const Livro *livro){
    printf("Titulo: %s\n", livro->titulo);
    printf("Num de paginas: %d\n", livro->num_paginas);
    printf("Preco: %.2f\n\n", livro->preco);
}

void delete_livro (Livro **livro){
    free(*livro);
    *livro = NULL;
}

int main(){
    Livro *livro_harry = create_livro("Harry Poter 1", 200,25);
    print_livro(livro_harry);
    livro_harry->preco = 10;
    print_livro(livro_harry);
    update_livro(livro_harry, "Harry Poter 001", 210,30);
    print_livro(livro_harry);
    delete_livro(&livro_harry);
    printf("livro_harry == NULL ? %d\n", livro_harry == NULL);

    return 0;
}
    float preco;
}Livro;

//construtor para livro
Livro* create_livro(const char *titulo, unsigned int num_paginas, float preco){
    Livro* livro =(Livro*) calloc(1,sizeof(Livro));
    strcpy(livro -> titulo, titulo);
    livro -> num_paginas = num_paginas;
    livro -> preco = preco;
    return livro;
}
void update_livro(Livro *livro, const char *titulo, unsigned int num_paginas, float preco){
    strcpy (livro->titulo, titulo);
    livro -> num_paginas = num_paginas;
    livro -> preco = preco;

}

void print_livro(const Livro *livro){
    printf("Titulo: %s\n", livro->titulo);
    printf("Num de paginas: %d\n", livro->num_paginas);
    printf("Preco: %.2f\n\n", livro->preco);
}

void delete_livro (Livro **livro){
    free(*livro);
    *livro = NULL;
}

int main(){
    Livro *livro_harry = create_livro("Harry Poter 1", 200,25);
    print_livro(livro_harry);
    livro_harry->preco = 10;
    print_livro(livro_harry);
    update_livro(livro_harry, "Harry Poter 001", 210,30);
    print_livro(livro_harry);
    delete_livro(&livro_harry);
    printf("livro_harry == NULL ? %d\n", livro_harry == NULL);

    return 0;
}