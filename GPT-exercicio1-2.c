#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite dois números e descubra qual o maior.\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d é maior.\n", num1);

    } else if(num2 > num1){
        printf("%d é maior.\n", num2);

    } else {
        printf("Os dois são iguais.\n");
    }

    return 0;

}