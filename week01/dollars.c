#include<stdio.h>
#include <stdbool.h>

int main(void){
    long dollars = 1;
    char c;
    
    while(true){
        printf("Here's $%ld. Double it and give to next person ? ", dollars);
        scanf("%c",&c);

        if( c == 'y' || c == 'Y'){
            dollars *=2;
            scanf("%c",&c);
        }else{
            break;
        }
    }
    return 0;
}