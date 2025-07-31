#include <stdio.h>

void meow(int n);
int positive_int(void);

int main(void){
    int numero_meow = positive_int();
    meow(numero_meow);
}

//Função numero positivo
int positive_int(void){
    int num;
    do
    {
        printf("Digite um número: ");
        scanf("%d",&num);
    } while (num < 1);
    return num;
}

//Função meow
void meow(int n){
    for(int i = 0; i < n; i++){
        printf("meow\n");
    }
}