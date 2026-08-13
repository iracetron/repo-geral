#include <stdio.h>

float mediaNotas (float n1, float n2, float n3, float n4);
char conceito (float media);

int main(){

    float lang, math, chum, cnat;

    printf("Digite suas notas abaixo.\n");
    printf("Linguagens: ");
    scanf("%f", &lang);
    printf("Matemática: ");
    scanf("%f", &math);
    printf("Ciências Humanas: ");
    scanf("%f", &chum);
    printf("Ciências Naturais: ");
    scanf("%f", &cnat);

    float mediatotal = mediaNotas (lang, math, chum, cnat);

    char c = conceito(mediatotal);

    printf("Sua nota foi: %.2f.\n", mediatotal);
    printf("Conceito: %c\n", c);

    

    return 0;
}

float mediaNotas (float n1, float n2, float n3, float n4){

    float media;
    return media = (n1 + n2 + n3 + n4) / 4;
}

char conceito(float media){

    if(media >= 9) return 'A';
    else if(media >= 7) return 'B';
    else if(media >= 5) return 'C';
    else return 'D';
}