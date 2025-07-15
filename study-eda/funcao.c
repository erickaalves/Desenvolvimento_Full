#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
    int z = x+y;

    puts("na função soma");
    
    printf ("&x = %p, valor de x, na função é %d\n", &x, x);
    printf ("valor de y, na função é %d\n", y);
    printf ("valor de z, na função é %d\n", z);
    return z;
 }

 int main(){

    int a = 10;
    int b = 20;
    int c;

    printf ("valor de a, antes da função é %d\n", a);
    printf ("valor de b, antes da função é %d\n", b);
    printf ("valor de c, antes da função é %d\n", c);  


    c = soma(a, b);

    printf ("valor de a, depois da função é %d\n", a);
    printf ("valor de b, depois da função é %d\n", b);
    printf ("valor de c, depois da função é %d\n", c); 

   return 0;  
   
}
 