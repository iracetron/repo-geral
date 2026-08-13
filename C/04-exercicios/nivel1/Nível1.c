#include <stdio.h>

#define TAM 10

void lerVetor(int vetor[], int tamanho);
void imprimirVetor(int vetor[], int tamanho);
float mediaVetor(int vetor[], int tamanho);
int maiorVetor(int vetor[], int tamanho);
int menorVetor(int vetor[], int tamanho);

int main(){

    int menu;
    int leitura[TAM];

    do{

        printf("===== Menu =====\n");
        printf("1. Leitura de vetores\n");
        printf("2. Impressão de vetores\n");
        printf("3. Media dos valores\n");
        printf("4. Maior valor\n");
        printf("5. Menor valor\n");
        printf("0. Encerrar\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
            lerVetor(leitura, TAM);
            printf("\n\n");
            break;

            case 2:
            imprimirVetor(leitura, TAM);
            printf("\n");
            break;

            case 3:
            float media = mediaVetor(leitura, TAM);

            printf("Resultado: %.2f\n\n", media);
            break;

            case 4:
            int maior = maiorVetor(leitura, TAM);

            printf("Maior valor digitado: %d\n\n", maior);
            break;

            case 5:
            int menor = menorVetor(leitura, TAM);

            printf("Menor valor digitado: %d\n\n", menor);
            break;

            case 0:
                printf("Encerrando menu.\n\n");
            break;

            default:
                printf("Menu inválido, digite novamente\n\n");
            break;

        }

    }while(menu != 0);



    return 0;
}

void lerVetor(int vetor[], int tamanho){

    printf("Digite os valores:\n");

    for(int i = 0; i < tamanho; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);

    }

}

void imprimirVetor(int vetor[], int tamanho){

    for(int i = 0; i < tamanho; i++){
        printf("Valor %d: %d\n", i+1, vetor[i]);
    }

}

float mediaVetor(int vetor[], int tamanho){

    float soma = 0.00;

    for(int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }

    return soma / tamanho;

}

int maiorVetor(int vetor[], int tamanho){
    
    int max;
    int verificar = 1;

    for(int i = 0; i < tamanho; i++){
        if(verificar){
            max = vetor[i];
            verificar = 0;
        } else {
            if (vetor[i] > max) max = vetor[i];
        }
    }

    return max;
}

int menorVetor(int vetor[], int tamanho){

    int min;
    int verificar = 1;

    for(int i = 0; i < tamanho; i++){
        if(verificar){
            min = vetor[i];
            verificar = 0;
        } else {
            if (vetor[i] < min) min = vetor[i];
        }
    }

    return min;

}