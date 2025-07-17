#include <stdio.h>

int soma_sub(int x, int y, int *w){
    int soma = x+y;
    *w = x-y;
    return soma;
}

int main(){
    int a = 10;
    int b = 30;
    int c;
    int d;

    printf("Antes valor da soma = %d, Antes valor da subtração = %d\n", c, d);

    c = soma_sub (a,b,&d);
    
    printf("valor da soma = %d, valor da subtração = %d\n", c, d);
}

