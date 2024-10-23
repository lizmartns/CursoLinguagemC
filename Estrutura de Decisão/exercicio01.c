#include <stdio.h>

//Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos

int main(){
    int num1, num2, num3;
    int quadrado = 0;

    printf("Escreva o primeiro número: ");
    scanf("%d", &num1);

    printf("Escreva o segundo número: ");
    scanf("%d", &num2);

    printf("Escreva o terceiro número: ");
    scanf("%d", &num3);

    quadrado = (num1*num1)+(num2*num2)+(num3*num3);

    printf("A soma dos quadrados dos valores %d, %d e %d e: %d", num1,num2, num3, quadrado);

    return 0;
}