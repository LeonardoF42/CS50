#include <stdio.h>

int main(void){
    float x,y;

    printf("Digite o valor de x: ");
    scanf("%f",&x);

    printf("Digite o valor de y: ");
    scanf("%f",&y);

    printf("O resultado da divisão dos números é: %.50f\n", x/y);

    return 0;
}