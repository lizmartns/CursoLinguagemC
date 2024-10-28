#include <stdio.h>

// ponteiros -
void incrementa (int* valor){

}

int main(){
    int contador = 10;

    printf("O contador vale %d", contador);

    incrementa(contador);
    printf("Depois de incrementar.\n");
    printf("O contador vale %d", contador);
}