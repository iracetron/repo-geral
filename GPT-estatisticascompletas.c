#include <stdio.h>

int main(){

    int num, contador = 0, soma = 0;
    int max, min;
    float media = 0;
    int flag = 1;

    do{

        printf("Digite um número: ");
        scanf("%d", &num);

        if(num > 0){
            contador++;
            soma += num;

            if(flag){
                max = min = num;
                flag = 0;
            } else {
                if (num > max)
                    max = num;

                if (num < min)
                    min = num;
        
            }

        } else if (num < 0){
            printf("Somente números positivos. \n");

        }
        

    } while (num != 0);

    if (contador > 0){
        media = (float)soma / contador;

    printf("Quantidade: %d \n", contador);
    printf("Soma: %d \n", soma);
    printf("Media: %.2f \n", media);
    printf("Máximo: %d \n", max);
    printf("Mínimo: %d \n", min);

    } else {
        printf("Nenhum número válido digitado.\n");

    }



    return 0;

}