#include <stdio.h>

int x = 10;
int y = 20;

int main(){
    int x = 20;
    int y = 20;

    if(x<y){
        printf("x is less than y\n");
    }else if (x>y){
        printf("x is not less than y\n");
    }else{
        printf("x and y are equal\n");
    }
    
    return 0;
}