#include <stdio.h>

int main(){

    char nome[50];

    printf("Informe seu nome de usuário. \n");

    printf("Insira seu nome: %s", nome);
    scanf("%s", nome);

    printf("Olá %s, seja bem-vindo(a).", nome);

    return 0;
    
}