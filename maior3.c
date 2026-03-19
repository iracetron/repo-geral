#include <stdio.h>

float maior(float num1, float num2);

int main(){ 

    float x, y, m;

    printf("Insira um valor:\n");
    scanf("%f", &x);
    fflush(stdin);

    printf("Insira outro valor:\n");
    scanf("%f", &y);
    fflush(stdin);

    m = maior(x,y);

    printf("Maior: %.2f\n", m);

}

float maior(float num1, float num2){
    if (num1 > num2)
        return num1;
    else
        return num2;
}