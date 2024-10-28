// faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o maior valor

#include <stdio.h>

int maior_valor(int vetor[], int qtd){
    int maior = 0;
    for(int i = 0; i < qtd; i++){
        if(i == 0){
            maior = vetor[i];
        }
    }

}
int main(){
    int tm = 10;
    int vetor[tm] = {1, 2, 35, 46, 78, 9, 30, 9, 60};

    return 0;
}