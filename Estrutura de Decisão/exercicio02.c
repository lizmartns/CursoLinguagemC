#include <stdio.h>

//Leia quatro notas, calcule a média aritmética e imprima o resultado.

int main(){
    float num1, num2, num3, num4;
    float media;

    printf("Escreva a primeira nota: ");
    scanf("%f", &num1);

    printf("Escreva a segunda nota: ");
    scanf("%f", &num2);

    printf("Escreva a terceira nota: ");
    scanf("%f", &num3);

    printf("Escreva a quarta nota: ");
    scanf("%f", &num4);

    media = (num1+num2+num3+num4)/4;

    printf("A media das quatro notas %.1f, %.1f, %.1f e %.1f e: %.2f", num1,num2, num3, num4, media);

    return 0;
}