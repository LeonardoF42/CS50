#include <stdio.h>

void print_row(int width);


int main(void){
    const int N = 3;
    
    //Print n rows
    for(int i = 0; i < N; i++){
        print_row(N);
    }

}


//Função largura da linha
void print_row(int width){
    for (int i = 0; i < width; i++){
        printf("#");
    }
    printf("\n");
}