#include <stdio.h>

#define TAM 10

int main(){

    int vetor[TAM];
    int i, j, temp, menor, chave;

    printf("Digite os valores:\n");
    for(i = 0; i < TAM; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    //Bubble Sort
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM-1-i; j++){
            if(vetor[j] > vetor[j+1]){
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    for(i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n\n");

    //Selection Sort

    for(i = 0; i < TAM-1; i++){

        menor = i;

        for(j = i+1; j < TAM; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }

        temp = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = temp;
    }

    for(i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n\n");

    //Insertion Sort

    for(i = 1; i < TAM; i++){

        chave = vetor[i];
        j = i - 1;

        while(j >= 0 && vetor[j] > chave){
            vetor[j+1] = vetor[j];
            j--;
        }

        vetor[j+1] = chave;
    }

    for(i = 0; i < TAM; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n\n");
    
    return 0;
}