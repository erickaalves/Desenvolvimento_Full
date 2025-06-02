#include<stdio.h>
/*biblioteca padrao de input e output de dados.h de header*/
/*comentarios teste de subida de arquivo*/
int main(){
    int a = 10;
    int b = 0;
    int c = 0;
    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);

    b = 20;
    c = a+b;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);


    /*##%p = %pointer e %d = Mostre em formato Double*/
    return 0;
}

