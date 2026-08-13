#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, mult;
    int i = 1;

    do{
        printf("Digite um número: ");
        scanf("%d", &num);

    } while (num > 10 || num < 1);
        while(i <= 10){
            mult = num * i;
            printf("%d x %d = %d\n", num, i, mult);
            i++;

        }

    return 0;

}