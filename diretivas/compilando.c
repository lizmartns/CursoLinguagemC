#include <stdio.h>

// compilação via terminal
// gcc arquivo fonte(opcional) -o nome.programa
// gcc nome_do_programa.c - o nome-do-programa-executável.qualquercoisa
int main(){
    int qtd, soma=0;
    printf("Quantos números você quer somar?");
    scanf("%d", &qtd);

    for(int i=0; i<qtd; i++){
        soma = soma + i *2 +3;
    }
    printf("A soma é %d", soma);

    return 0;

}