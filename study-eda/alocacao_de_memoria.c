#include <stdio.h>
#include <stdlib.h>

int main (){
    
int vs[5] = {4,3,2,1,0}; //alocacao estatica de memoria na stack 
    
puts ("###vetor estatico");

printf ("&vs = %p, vs = %p\n", &vs, vs);

for (int i=0;i<5;i++){
    printf ("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
    }
puts ("\n");

//alocacao dinamica de memoria na heap (lixo de memoria)
puts ("###vetor dinamico malloc");

int *vh_mal= (int*)malloc(4 * sizeof(int));

printf("&vh_mal = %p, vh_mal = %p\n", &vh_mal, vh_mal);

for (int i=0;i<5;i++){
    printf("&vh_mal[%d] = %p, vh_mal[%d] = %d\n", i, &vh_mal[i], i, vh_mal[i]);
    }

puts("\n");

puts ("###vetor dinamico calloc");


int *vh_cal = (int*) calloc (4,sizeof(int));

printf("&vh_cal = %p, vh_cal = %p\n", &vh_cal, vh_cal);

for (int i=0; i<5;i++){
    printf("&vh_cal[%d] = %p, vh_cal[%d] = %d\n", i, &vh_cal[i], i, vh_cal[i]);
}

} 
