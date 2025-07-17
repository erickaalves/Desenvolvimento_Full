#include <stdio.h>

void troca (int *x, int *y){

    printf ("endereco de x = %p, endereco de y = %p\n", x, y);
    printf ("valor de x = %d, valor de y = %d\n", *x, *y);
    
    int aux = *x;

    printf ("endereco de x = %p, endereco de y = %p\n", x, y);
    printf ("valor de x = %d, valor de y = %d, valor de aux =  %d\n", *x, *y, aux);

    *x=*y;

    printf ("endereco de x = %p, endereco de y = %p\n", x, y);
    printf ("valor de x = %d, valor de y = %d, valor de aux = %d\n", *x, *y, aux);
    
    *y=aux;

    printf ("endereco de x = %p, endereco de y = %p\n", x, y);
    printf ("valor de x = %d, valor de y = %d, valor de aux = %d\n", *x, *y, aux);

}

int main(){
    int a= 10;
    int b= 20;

    troca (&a,&b);
}