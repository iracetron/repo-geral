#include <stdio.h>

int main(){
    char nome[50] = "";
    char sobrenome[50] = "";

    printf("Insira seu nome e sobrenome: ");
    scanf("%s %s", nome, sobrenome);
    /*printf("Insira seu sobrenome: ");*/
    /*scanf("%s", sobrenome);*/

    printf("Registro de nome concluído, seja bem-vindo(a) %s %s!\n", nome, sobrenome);

    return 0;
    
}