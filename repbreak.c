#include <stdio.h>

//O comando break interrompe o processo assim que a condição for atendida
//Ele interrompe mesmo se a condição não for uma condição de parada (como i = 10)

int main(){

    int i;

    for(i = 1; i <= 10; i++){
        printf("%d.\n", i);

        if(i == 5){
            break;
        }
    }


}
