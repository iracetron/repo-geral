#include <stdio.h>

int main(){

    int total = 0;
    int verificar = 1;
    float num, max, min;
    float media = 0, soma = 0;
    int aprovado = 0, recuperacao = 0, reprovado = 0;
    int par = 0, impar = 0, amedia = 0;

    do{

        printf("Digite sua nota: ");
        scanf("%f", &num);

        if(num >= 0 && num <= 10){
            total++;
            soma += num;

            if((int)num % 2 == 0){
                par++;
            } else {
                impar++;
            }

            if(num >= 7){
                aprovado++;
            } else if (num < 5){
                reprovado++;
            } else {
                recuperacao++;
            }

            if(verificar){
                max = min = num;
                verificar = 0;
            } else {
                if(num > max) max = num;
                if(num < min) min = num;
            }      

        } else if(num < -1 || num > 10){
            printf("Nota inválida.\n");
        }

        if(total != 0){
        media = soma / total;
            if(num > media){
                amedia++;
            }
        }

    } while(num != -1);

    if(total != 0){

        printf("Quantidade total de notas: %d\n", total);
        printf("Soma das notas: %.2f\n", soma);
        printf("Média da turma: %.2f\n", media);
        printf("Maior nota: %.2f\n", max);
        printf("Menor nota: %.2f\n", min);

        printf("Aprovados: %d\n", aprovado);
        printf("Em recuperação: %d\n", recuperacao);
        printf("Reprovados: %d\n", reprovado);

        printf("Quantidade de notas pares: %d\n", par);
        printf("Quantidade de notas ímpares: %d\n", impar);
        printf("Notas acima da média da turma: %d\n", amedia);

    } else {
        printf("Nenhuma nota digitada.\n");
    }


    return 0;
}