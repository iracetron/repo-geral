#include <stdio.h>

//Assim como o comando while, precisa de inicialização, atualização e condição de parada.
//Porém o comando do-while obrigatoriamente executará uma vez.

int main(){

    int i=1; //Inicialização da variável

    do{
        printf("%d.\n", i); //Condição de parada
        i++; //Atualização de variável
    }while(i <= 10);
}