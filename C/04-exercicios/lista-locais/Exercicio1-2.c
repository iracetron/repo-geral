#include <stdio.h>

/*Menu com:
Leitura de vetores
Impressão de vetores
Soma de vetores
Calculo de média
Mostrar o maior
Mostrar o menor e seu índice
Sair*/

#define TAM 10

void lerValores(int vetor[], int tamanhodovetor);
void imprimirValores(int vetor[], int tamanhodovetor);
int somaValores(int vetor[], int tamanhodovetor);
float mediaValores(int vetor[], int tamanhodovetor);
int maiorValor(int vetor[], int tamanhodovetor);
int menorValor(int vetor[], int tamanhodovetor);

int main(){

    int menu;
    int leitura[TAM];

    do{

        printf("===== Menu =====\n");
        printf("1. Digite os valores\n");
        printf("2. Valores digitados\n");
        printf("3. Soma dos valores\n");
        printf("4. Média dos valores\n");
        printf("5. Maior valor digitado\n");
        printf("6. Menor valor digitado\n");
        printf("0. Sair\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
            lerValores(leitura, TAM);
            printf("\n\n");
            break;

            case 2:
            imprimirValores(leitura, TAM);
            printf("\n\n");
            break;

            case 3:
            int somatotal = somaValores(leitura, TAM);
            printf("Resultado da soma: %d\n\n", somatotal);
            break;

            case 4:
            float mediatotal = mediaValores(leitura, TAM);
            printf("Média dos valores: %.2f\n\n", mediatotal);
            break;

            case 5:
            int maior = maiorValor(leitura, TAM);
            printf("Maior valor digitado: %d\n\n", maior);
            break;

            case 6:
            int menor = menorValor(leitura, TAM);
            printf("Menor valor digitado: %d\n\n", menor);
            break;

            case 0:
            printf("Encerrando menu...\n\n");
            break;

            default:
            printf("Menu inválido, digite novamente.\n\n");
            break;
        }

    }while(menu != 0);

    return 0;
}

void lerValores(int vetor[], int tamanhodovetor){

    for(int i = 0; i < tamanhodovetor; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

}

void imprimirValores(int vetor[], int tamanhodovetor){
    
    for(int i = 0; i < tamanhodovetor; i++){
        printf("Valor %d: %d\n", i+1, vetor[i]);

    }

}

int somaValores(int vetor[], int tamanhodovetor){

    int soma = 0;

    for(int i = 0; i < tamanhodovetor; i++){
        soma += vetor[i];
    }

    return soma;

}

float mediaValores(int vetor[], int tamanhodovetor){

    float soma = 0;

    for(int i = 0; i < tamanhodovetor; i++){
        soma += vetor[i];
    }

    return soma / tamanhodovetor;
}

int maiorValor(int vetor[], int tamanhodovetor){

    int max;
    int verificar = 1;

    for(int i = 0; i < tamanhodovetor; i++){
        if(verificar){
            max = vetor[i];
            verificar = 0;
        } else {
            if(vetor[i] > max) max = vetor[i];
        }
    }

    return max;

}

int menorValor(int vetor[], int tamanhodovetor){

    int min;
    int verificar = 1;

    for(int i = 0; i < tamanhodovetor; i++){
        if(verificar){
            min = vetor[i];
            verificar = 0;
        } else {
            if(vetor[i] < min) min = vetor[i];
        }
    }
    
    return min;

}