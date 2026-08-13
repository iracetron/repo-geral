#include <stdio.h>

int main(){

    int num;
    int total = 0, soma = 0, par = 0, impar = 0, max, min, verificacao = 1;
    float media = 0;

    do{

        printf("Digite um número: ");
        scanf("%d", &num);

        if(num != 0){
            total++;
            soma += num;

            if(num % 2 == 0){
                par++;
            } else {
                impar++;
            }

            if(verificacao){
                max = min = num;
                verificacao = 0;
            } else {
                if(num > max) max = num;
                if(num < min) min = num;

            }
            
        }

    }while (num != 0);

    if (total > 0){
        media = (float)soma / total;
    }

    printf("Total: %d\n", total);
    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Pares: %d\n", par);
    printf("Ímpares: %d\n", impar);
    printf("Maior: %d\n", max);
    printf("Menor: %d\n", min);



    return 0;
}