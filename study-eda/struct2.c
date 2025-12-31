#include <stdio.h>
#include <stdlib.h>

int main(){
    typedef struct Aluno {
        char nome [100];
        int idade;
        double cpf;
    }aluno;

    aluno *ted = (aluno*)calloc (1, sizeof(aluno));
    strcpy(ted->nome, "Ted");
    ted->idade=10;

    return 0;
}