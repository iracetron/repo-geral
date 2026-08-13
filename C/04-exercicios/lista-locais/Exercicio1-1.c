#include <stdio.h>

int main(){

    int lerInteiros[10];
    int i;

    printf("Digite 10 valores inteiros: \n");

    for(i = 0; i < 10; i++){
        printf("%dº valor: ", i+1);
        scanf("%d", &lerInteiros[i]);
    }
    
    printf("\n\n");

    for(i = 0; i < 10; i++){
        printf("%dº valor: %d\n", i+1, lerInteiros[i]);
    }

    return 0;
}