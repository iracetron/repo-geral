#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int par = 0;
    int impar = 0;
    int i = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    while(i <= num){
        if(i % 2 == 0){
            par++;

        } else {
            impar++;

        }

        i++;
        
    }

    printf("Seu número possui:\n");
    printf("%d números pares.\n", par);
    printf("%d números ímpares.\n", impar);

    return 0;
}