#include <stdio.h>
#include <stdlib.h>

int main(){

    int num = 0;
    int contador = 0;
    int soma = 0;

    do{

        printf("Digite um número: ");
        scanf("%d", &num);
    
        if(num != 0){
        contador++;
        soma = soma + num;
        }

    } while (num != 0);


    printf("Total de números: %d\n", contador);
    printf("Soma dos números: %d\n", soma);
    
    return 0;

}