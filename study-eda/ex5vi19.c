#include <stdio.h> // essa biblioteca tem printf, scanf 
#include <stdlib.h> //essa biblioteca tem malloc, calloc, free

int main (){
    double *vec = (double*) calloc (5,sizeof(double));
    for (int i=0; i<5; i++){
        printf("vec[%d] = %d", i, vec[i]);
    }

    double v[5] = {0,1,2,3,4};
    for (int i = 0; i<5; i++){
        printf("v[%d] = %d", i, v[i]);
    }

 

    return 0;
}