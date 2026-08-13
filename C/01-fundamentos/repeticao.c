#include <stdio.h>

//Três coisas necessárias para estruturas de repetição: inicialização, atualização e parada
//O que fazemos com while, conseguimos fazer com for

int main(){
    
    int i = 1; //Inicialização da variável

    while(i <= 10){ //Condicional necessário pra repetição parar
        printf("%d.\n", i); 
        i++; //Atualização de variável
    }
}