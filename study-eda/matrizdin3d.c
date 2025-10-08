#include <stdio.h>
#include <stdlib.h>

int main (){
    int linha = 2;
    int coluna = 3;
    int fatia = 2;
    int ***m = (int ***) calloc(fatia, sizeof(int**));
        for(int k = 0; k<linha; k++){
            m[k] = (int**) calloc (linha, sizeof(int*));
            for (int i = 0; i<coluna;i++){
                m[k][i] = (int*)calloc (coluna, sizeof(int));
            }
        }
    int count =0;
    printf("&m = %p, m = %p\n\n", &m,m);
    
    for(int k=0;k<fatia;k++){
        printf("&m[%d] = %p, m[%d] = %p\n", k,&m[k],k,m[k]);
        
        for(int i=0;i<linha;i++){
            printf("&m[%d][%d]=%p, m[%d][%d]=%p\n", k,i,&m[k][i],k,i, m[k][i]);

            for(int j=0;j<coluna;j++){
                printf("&m[%d][%d][%d] = %p, m[%d][%d][%d] = %d\n", k,i,j,&m[k][i][j],k,i,j, m[k][i][j]);
            }
            puts("");
        }
        puts ("");
    }


    return 0;
}
 