#include <stdio.h>

int main() {
    int numero = 10;
    int *ptr = &numero;

    printf("Valor de numero: %d\n", numero);
    printf("Endereco de numero: %p\n", &numero);
    printf("Valor apontado por ptr: %d\n", *ptr);
    printf("Endereco armazenado em ptr: %p\n", ptr);

    *ptr = 20;

    printf("Novo valor de numero: %d\n", numero);

    return 0;
}