#include <stdio.h> // essa biblioteca tem printf, scanf 
#include <stdlib.h> //essa biblioteca tem malloc, calloc, free

int main (){
    for(int i=0;i<10000000000; i++){
    char *v = (char*)calloc(5, sizeof(char));
    free (v);
    }
    return 0;
}