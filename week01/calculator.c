#include <stdio.h>

int main(void){

    int x,y,z;
    //pedindo e lendo o valor de x do declado
    printf("valor de x: ");
    scanf("%d",&x);

    //pedindo e lendo o valor de y do declado
    printf("Valor de y: ");
    scanf("%d",&y);

    //fazendo a soma
    z = x + y;

    //retornando o resultado da soma
    printf("O resultado da soma é: %d\n",z);

    return 0;
}