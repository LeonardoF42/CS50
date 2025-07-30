#include <stdio.h>

int main(void){
    char nomeCompleto[50];

    printf("What's your name ??? : ");
    fgets(nomeCompleto,sizeof(nomeCompleto),stdin);
    printf("Hello %s\n", nomeCompleto);

}
