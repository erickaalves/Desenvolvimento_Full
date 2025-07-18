#include <stdio.h>

int main(){
    int v[5] = {10,20,30,40,50}; 
    for (int i=0; i<5; i++){
        printf("Endereco do vetor = %p, Valor do vetor na posicao %d = %d\n", &v[i], i, v[i]);
    }
}