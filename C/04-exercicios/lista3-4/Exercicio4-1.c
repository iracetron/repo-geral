#include <stdio.h>

int somar();
int subtrair();
int multiplicar();
float dividir();

int main(){

    int menu, resultado;
    float resultadodiv;

    do{

        printf("Calculadora Simples\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("0. Sair\n");
        scanf("%d", &menu);

        switch(menu){
            case 1:
            resultado = somar();
            printf("Resultado: %d\n\n", resultado);
            break;

            case 2:
            resultado = subtrair();
            printf("Resultado: %d\n\n", resultado);
            break;

            case 3:
            resultado = multiplicar();
            printf("Resultado: %d\n\n", resultado);
            break;

            case 4:
            resultadodiv = dividir();
            printf("Resultado: %.2f\n\n", resultadodiv);
        
            break;

            case 0:
            printf("Fechando calculadora.\n");
            break;

            default:
            printf("Menu inválido, tente novamente.\n\n");
            break;
        }

    }while(menu != 0);

    
    return 0;
}

int somar(){
    
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);

    int sum = num1 + num2;

    return sum;

}

int subtrair(){
    
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);

    int sub = num1 - num2;

    return sub;

}

int multiplicar(){
    
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);

    int mult = num1 * num2;

    return mult;

}

float dividir(){
    
    float num1, num2;

   
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);

     while(num2 == 0){
        printf("Valor inválido, digite outro número: ");
        scanf("%f", &num2);
        }

    float div = num1 / num2;

    return div;
}

