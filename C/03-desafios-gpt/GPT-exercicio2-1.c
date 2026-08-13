#include <stdio.h>

int main(){

    int num, menu;
    int i = 1;

    printf("Digite um número: ");
    scanf("%d", &num);
    
    printf("Escolha uma opção:\n");
    printf("1. Todos os números até %d\n", num);
    printf("2. Todos os pares até %d\n", num);
    printf("3. Todos os ímpares até %d\n", num);
    printf("4. Todos os múltiplos de 5 até %d\n", num);
    scanf("%d", &menu);

    switch(menu){
        case 1:
            while (i <= num){
            printf("%d ", i);
            i++;
            }

        break;

        case 2:
        while(i <= num){
            if(i % 2 == 0){
                printf("%d ", i);
            } 
            i++;
        }

        break;

        case 3:
        while (i <= num){
            if(i % 2 == 1){
                printf("%d ", i);
            }
            i++;
        }
        break;

        case 4:
        while (i <= num){
            if(i % 5 == 0){
                printf("%d ", i);
            }
            i++;
        }
        break;

        default:
        printf("Menu inválido.\n");

    }
    

    return 0;
}