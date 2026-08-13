#include <stdio.h>

#define texto "Digite suas informações."

int main(){
    printf("%s\n", texto);

    int idade = 0;
    float peso = 0.0;
    float altura = 0.0;
    char nome[50] = "";
    char profissão[50] = "";

    printf("Idade:");
    scanf("%d", &idade);

    printf("Peso:");
    scanf("%f", &peso);

    printf("Altura:");
    scanf("%f", &altura);

    printf("Nome:");
    scanf("%s", nome);

    printf("Profissão:");
    scanf("%s", profissão);

    printf("Dados informados:\n");
    printf("Você se chama %s e possui %d anos. Seu peso é %.2f e sua altura é %.2f e atualmente sua ocupação é %s. \n", nome, idade, peso, altura, profissão);

    return 0;
}