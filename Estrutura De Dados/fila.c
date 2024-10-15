#include <stdio.h>

#define TAMFILA 10

//fila / queue

int fila [TAMFILA] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

void lista_elementos(){
    printf("\n=========== FILA ATUAL ============\n");
    for (int i = 0; i< TAMFILA; i++){
        printf("-");
        printf("|%d|", fila [i]);
        printf("-");
    }
    printf("\nHead: %d\n", head);
    printf("")
}