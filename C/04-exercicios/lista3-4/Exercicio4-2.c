#include <stdio.h>

float mediaNotas(float notaA, float notaB, float notaC);
void conceitoNotas(float conceito);

int main(){

    float nota1, nota2, nota3;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    float media = mediaNotas(nota1, nota2, nota3);

    printf("\nSua nota foi: %.2f\n", media);
    conceitoNotas(media);


    return 0;
}

float mediaNotas(float notaA, float notaB, float notaC){

    return (notaA + notaB + notaC)/3;

}

void conceitoNotas(float conceito){

    if(conceito >= 7){
        printf("Construção Satisfatória da Aprendizagem (CSA)\n");
    } else if(conceito >= 5){
        printf("Construção Parcial da Aprendizagem (CPA)\n");
    } else {
        printf("Construção Restrita da Aprendizagem (CRA)\n");
    }

}