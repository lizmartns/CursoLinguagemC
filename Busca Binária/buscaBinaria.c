#include <stdio.h>

// busca binária é um tipo de busca realizada em vetores ordenados, a qual se baseia no método de divisões sucessivas do vetor, até que o valor desejado seja encontrado
int busca_binaria(int vetor[], int chave, int tam){
    int inicio = 0;
    int fim = tam-1;
    
}
int main(){
    // vetor ordenado
    int vetor[6] = {1, 3, 5, 8, 12, 42};

    //elemento chave que queremos encontrar no vetor
    int chave = 12;

    // aplicando a busca binária
    //vetor, chave, tam
    int ret = busca_binaria(vetor, chave, 6);
    printf("O elemento %d está na posição %d", chave, ret);

    return 0;
}