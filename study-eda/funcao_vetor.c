#include <stdio.h>
#include <stdlib.h> // null, calloc, malloc, free


// void uma funcao sem retorno
void soma_escalar (int v[], int n, int escalar){
    for (int i = 0; i<n ;i++){
        v[i]+=escalar;
    }
}

//int *v e int v[], são as mesmas coisas com sintaxes diferentes, pois passam o endereço base do vetor
void print_vetor(const int *v, int n){//o const não deixa o valor ser modificado, só read, constante.
    for (int i=0; i<n;i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    }
    puts("\n");
}

//ENTENDER ESSA FUNCÃO COMPLETA A MAǴICA TÁ AQUI

void desaloca_vetor (int **v){
    free (*v);
    *v = NULL; //Boa prática de programação depois do FREE

}

int main () {
    int vs[5] = {0,10,20,30,40};

    puts ("vetor estático");
    
    print_vetor (vs,5);
    soma_escalar (vs, 5,9);
    print_vetor (vs,5);


//alocação dinamica de memoria
    int *vh = (int*) calloc(5,sizeof(int));
    for (int i =0 ; i<5 ; i++){ 
        vh[i] = i *100;
    }

    print_vetor (vh,5);
    soma_escalar (vh, 5,9);
    print_vetor (vh, 5);

    // free (vh);
    // vh = NULL; //Boa prática de programação depois do FREE

    puts("ANTES DA FUNÇÃO DESALOCAR");
    printf("&vh = %p, vh = %p\n", &vh, vh);
    desaloca_vetor(&vh);
    puts("DEPOIS DA FUNÇÃO DESALOCAR");
    printf("&vh = %p, vh = %p\n", &vh, vh);

    return 0;
}