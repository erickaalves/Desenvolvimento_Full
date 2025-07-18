#include <stdio.h>

int main(){
    int v[5];
    for(int i = 0; i<5; i++){
        scanf ("%d", &v[i]);
    }
    printf("Os valores digitados foram: ");
     for(int i = 0; i<5; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}