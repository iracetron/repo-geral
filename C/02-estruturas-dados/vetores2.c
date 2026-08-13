#include <stdio.h>

int main(){

    int v[5] = {10, 20, 30, 40, 50}; //lista de inicialização
    int i; //essa variável i indica o índice
    float s = 0;

    for(i=0;i<5;i++){ 
 //graças ao laço de repetição, é possível fazer a soma sem puxar índice a índice       
        s += v[i];
    }

    printf("Resultado: %f\n", s/5);
    
}