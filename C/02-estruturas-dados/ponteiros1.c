#include <stdio.h>

int main(){

    int x = 10;
    int *p = &x;

    //Errado
    /*printf("Valor de x: %d\n", x);
    printf("O endereço de x: %p\n", &x);
    printf("O valor armazenado em p: %d\n", *p);
    printf("O valor apontado por %p\n", p);*/

    //Correto
    printf("Valor de x: %d\n", x);
    printf("O endereço de x: %p\n", (void*)&x);
    printf("O valor armazenado em p (endereço): %p\n", (void*)p);
    printf("O valor apontado por %d\n", *p);

    return 0;
}