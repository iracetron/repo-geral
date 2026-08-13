#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(0));
    int numero = rand() % 100;

        printf("Número: %d\n", numero);

    return 0;

}