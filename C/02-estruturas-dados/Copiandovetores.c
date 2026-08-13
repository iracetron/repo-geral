#include <stdio.h>

#define TAM 10

int main(){

    int vetorA[TAM], vetorB[TAM], vetorC[TAM], vetorD[TAM];
    int i;
    int auxiliar;

    printf("Digite os valores:\n");
    for(i = 0; i < TAM; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vetorA[i]);
    }

    //Cópia de Vetor A em Vetor B
    for(i = 0; i < TAM; i++){
        vetorB[i] = vetorA[i];
    }

    //Dobro de Vetor A em Vetor C
    for(i = 0; i < TAM; i++){
        vetorC[i] = vetorA[i] * 2;
    }

    //Inverso de Vetor A em Vetor D
    for(i = 0; i < TAM; i++){
        vetorD[i] = vetorA[TAM - 1 - i];
    }

    //Impressão de tudo
    for(i = 0; i < TAM; i++){
        printf("%d %d %d\n", vetorB[i], vetorC[i], vetorD[i]);
    }


    
    return 0;
}

