#include <stdio.h>

void func(int *x, int *y){
    printf("Antesx = %d, Antesy = %d\n", *x,*y);
    x = y;
    printf("Depoisx = %d, Depoisy = %d\n", *x,*y);
    *y = (*y) * (*x);
    printf("Multx = %d, Multy = %d\n", *x,*y);
    *x = *x + 2;
    printf("Somax = %d, Somay = %d\n", *x,*y);
    printf("endereco de x = %p, endereco do *x = %p\n", x, *x);
}

int main(){
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    func(&x, &y);
    printf("x = %d, y = %d\n", x,y);
    return 0;
}

/*quando igualei o x ao y dentro da funcao, o x passou a apontar para o mesmo endereco de y.*/