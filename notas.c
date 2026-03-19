#include <stdio.h>

int main(){
    
    float m;

    printf("Insira a nota: ");
    scanf("%f", &m);

    if(m >= 7.0){
        printf("Aprovado(a)!\n");
    }

    if(m >= 4.0 && m < 7.0){
        printf("Em recuperação!\n");
    }

    if(m < 4.0){
        printf("Reprovado(a)!\n");
    }

}