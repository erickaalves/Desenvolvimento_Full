#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha = 2;
    int coluna = 3;

    int **m = (int**) calloc (linha, sizeof(int*));


    //alocação dinamica de matrizes, pra cada linha ele aloca um vetor de 3, uma pra cada coluna

    for (int i = 0; i<linha;i++){
        m[i] = (int *) calloc (coluna, sizeof(int));
    }
    int count = 0;
    printf("&m = %p, m=%p\n\n", &m,m);
    for (int i=0;i<linha;i++){    
        printf("&m[%d] = %p, m[%d]= %p\n\n", i, &m[i], i, m[i]);
        for (int j=0;j<coluna;j++){
            m[i][j]=count++;
            printf ("&m[%d][%d] = %p, m[%d][%d] = %d\n",
                        i,j,&m[i][j], i,j, m[i][j]);
        }
        puts ("");

    }

    //falta desalocar ainda
    return 0;
}