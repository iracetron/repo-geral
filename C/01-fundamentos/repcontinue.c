#include <stdio.h>

//O comando continue ignora o que vem após a condição ser atendida e continue a próxima repetição

int main(){

    int i;

    for(i = 1; i <= 10; i++){

        if(i == 5){
            continue;
        }

        printf("%d.\n", i);
    }
    
}