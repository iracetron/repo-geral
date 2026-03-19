#include <stdio.h>

int main(){

    float m;

    printf("Digite sua nota: ");
    scanf("%f", &m);

    if(m >= 9.0){
        printf("Seu conceito é A!\n");

    } else if (m < 9.0 && m >= 7.0){
        printf("Seu conceito é B!\n");

    } else if (m < 7.0 && m >= 5.0){
        printf("Seu conceito é C!\n");

    } else {
        printf("Seu conceito é D!\n");

    }
    
}