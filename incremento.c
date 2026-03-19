#include <stdio.h>

int main(){
    
    int dado = 5;
    printf("Dado antes do incremento: %d.\n", dado);

    dado++;
    printf("Depois do incremento: %d.\n", dado);

    dado--;
    printf("Depois do decremento: %d.\n", dado);

    dado += 17;
    printf("Depois do incremento genérico: %d.\n", dado);

    dado -= 8;
    printf("Depois do decremento genérico: %d.\n", dado);

    dado *= 10;
    printf("Depois de multiplicar: %d.\n", dado);

    dado /= 5;
    printf("Depois de dividir: %d.\n", dado);
    
}