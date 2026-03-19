#include <stdio.h>

int main(){

    int numero = 5;
    int *pnum = &numero;

    printf("Valor de numero: %d\n", numero);
    printf("Endereço de numero: %p\n", (void*)&numero);

    *pnum = 20;

    printf("Valor de numero: %d\n", numero);
    printf("Endereço de numero: %p\n", (void*)&numero);
    
    return 0;
}