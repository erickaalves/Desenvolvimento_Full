 #include <stdio.h>
 #include <stdlib.h>

int main (){

    
    typedef struct Aluno {
        char nome[100];
        int idade;
        double matricula;
        double cpf;
    }Aluno;

    Aluno Ted;
    strcpy(Ted.nome, "Ted");
    Ted.idade = 10;

    return 0;
}