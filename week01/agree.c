#include <stdio.h>

int main(){

    char letter;

    printf("Do you agree ??? : ");
    scanf("%c",&letter);

    if( letter == 'y' || letter == 'Y'){
        printf("Agreed.\n");
    } else if( letter == 'n' || letter == 'N'){
        printf("Not agreed.\n");
    }

    return 0;
}