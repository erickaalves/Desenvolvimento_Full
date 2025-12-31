#include <stdio.h> //entrada e saida de dados 

int main (){
    int linha = 2;
    int coluna = 3;

    int m[2][3] = {{0,1,2}, {3,4,5}}; 

    printf ("&m = %p, m = %p\n\n", &m,m);

    for(int i = 0; i<linha; i++){
        for(int j = 0; j<coluna; j++){
            printf("&m[%d][%d] = %p, m[%d][%d] = %d\n", 
                i,j,&m[i][j],i,j, m[i][j]);
        }
        puts ("");
    }
    
    
    return 0;
}