#include <stdio.h>

/*Menu com
Quantidade de pares e ímpares
Quantidade de positivos, negativos e zeros
Soma dos múltiplos de 3
Conte quantos valores são maiores que a média
Verificar se existe um número X no vetor (busca linear)*/

#define TAM 10

void lerValores(int vetor[], int tamanhodovetor);
void paridadeValores(int vetor[], int tamanhodovetor);
void polaridadeValores(int vetor[], int tamanhodovetor);
int somaMult3 (int vetor[], int tamanhodovetor);
void acimaDaMedia (int vetor[], int tamanhodovetor);
int existeValor(int vetor[], int tamanhodovetor, int comparacao);

int main(){

    int menu;
    int leitura[TAM];

    do{

        printf("===== Menu =====\n");
        printf("1. Digite os valores\n");
        printf("2. Pares e ímpares\n");
        printf("3. Positivos, negativos e zeros\n");
        printf("4. Soma dos múltiplos de 3\n");
        printf("5. Valores maiores que a média\n");
        printf("6. Verifique se existe o valor escolhido no vetor\n");
        printf("0. Sair\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
            lerValores(leitura, TAM);
            printf("\n\n");
            break;

            case 2:
            paridadeValores(leitura, TAM);
            break;

            case 3:
            polaridadeValores(leitura, TAM);
            break;

            case 4:{
                int soma = somaMult3(leitura, TAM);
                printf("Resultado: %d\n\n", soma);
            break;
            }

            case 5:
            acimaDaMedia(leitura, TAM);
            printf("\n\n");
            break;

            case 6:{
                int num;

                printf("\nDigite o valor a ser descoberto: ");
                scanf("%d", &num);

                int existe = existeValor(leitura, TAM, num);
                
                if(existe){
                    printf("Existe.\n\n");
                } else {
                    printf("Não existe.\n\n");
                }
            break;
            }

            case 0:
            printf("Encerrando menu.\n\n");
            break;

            default:
            printf("Menu inválido, digite outro número.\n\n");
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

void paridadeValores(int vetor[], int tamanhodovetor){

    int par = 0, impar = 0;

    for(int i = 0; i < tamanhodovetor; i++){
        if(vetor[i] % 2 == 0){
            par++;
        } else {
            impar++;
        }
    }

    printf("Foi contabilizado %d números pares e %d números ímpares.\n\n", par, impar);

}

void polaridadeValores(int vetor[], int tamanhodovetor){

    int positivo = 0, negativo = 0, zero = 0;

    for(int i = 0; i < tamanhodovetor; i++){
        if(vetor[i] > 0){
            positivo++;
        } else if(vetor[i] < 0){
            negativo++;
        } else {
            zero++;
        }
    }

    printf("Números positivos: %d\n", positivo);
    printf("Números negativos: %d\n", negativo);
    printf("Zeros: %d\n\n", zero);

}

int somaMult3(int vetor[], int tamanhodovetor){

    int soma = 0;

    for(int i = 0; i < tamanhodovetor; i++){
        if(vetor[i] % 3 == 0){
            soma += vetor[i];
        }
    }

    return soma;
}

void acimaDaMedia(int vetor[], int tamanhodovetor){

    float media = 0;
    int acimamedia = 0, soma = 0;
    int i;

    for(i = 0; i < tamanhodovetor; i++){
        soma += vetor[i];
    }

    media = (float)soma / tamanhodovetor;

    for(i = 0; i < tamanhodovetor; i++){
        if(vetor[i] > media){
            acimamedia++;
        }
    }

    printf("A média foi de: %.2f\n", media);
    printf("O total de valores acima da média é: %d", acimamedia);

}

int existeValor(int vetor[], int tamanhodovetor, int comparacao){

    for(int i = 0; i < tamanhodovetor; i++){
        if(vetor[i] == comparacao)
            return 1;
    }

    return 0;

}