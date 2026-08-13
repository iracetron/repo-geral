#include <stdio.h>

int main(){

    int num;
    int pares = 0;
    int impares = 0;
    int contador = 0;
    int soma = 0;
    float media;

    do{

        printf("Digite um número: ");
        scanf("%d", &num);

        if (num != 0){
            contador++;
            soma += num;

                if(num % 2 == 0){
                    pares++;
                } else {
                    impares++;
                }

        }

    }while(num != 0);

        if (contador > 0){
            media = (float)soma / contador;

        } else {
            media = 0;
            
        }

    printf("Quantidade: %d\n", contador);
    printf("Soma: %d\n", soma);
    printf("Pares: %d\n", pares);
    printf("Ímpares: %d\n", impares);
    printf("Média: %.2f\n", media);


    return 0;

}