#include <stdio.h>
#include <string.h>

union numeros{
    int num1, num2, num3, num4; //20 bytes

}n;

int main(){

    int soma = 0; //4bytes
    n.num1 = 1;
    soma = soma + n.num1;
    printf("O valor de Num1 e %d.\n", n.num1);
    n.num2 = 5;
    soma = soma + n.num2;
    printf("O valor de Num2 e %d.\n", n.num2);
    n.num3 = 7;
    soma = soma + n.num3;
    printf("O valor de Num3 e %d.\n", n.num3);
    n.num4 = 9;
    soma = soma + n.num4;
    printf("O valor de Num4 e %d.\n", n.num4);

    printf("'n' esta ocupando %ld bytes em memoria\n", sizeof(n));
    printf("Soma = %d\n", soma);
    printf("Memoria total ocupada %ld", (sizeof(n)+sizeof(soma)));

}