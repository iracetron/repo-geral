#include <stdio.h>

void tabuada(int numero);

int main(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    tabuada(num);


    return 0;
}

void tabuada(int numero){

    int i;

    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}