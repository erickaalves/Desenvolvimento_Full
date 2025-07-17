#include <stdio.h>

void soma(int x, int y, int *z, int *w){
    *z = x + y;
    *w = x - y;
}

int main (){
    int a = 10;
    int b = 20;
    int c,d;

    printf("EnderecoCAntes: %p, EnderecoDAntes: %p\n", c, d);
    printf("AntesSoma: %d, AntesSubtração: %d\n", c, d);

    soma(a,b,&c,&d);

    printf("EnderecoCAntes: %p, EnderecoDAntes: %p\n", c, d);
    printf("Soma: %d, Subtração: %d\n", c, d);

    return 0;
}