#include <stdio.h>

int main(){

    int num;
    int i = 1;
    
    printf("Digite um número: ");
    scanf("%d", &num);

    while (i <= num){

        if (i % 3 == 0){
            printf("%d ", i);
            

        }

        i++;

    }

    return 0;

}