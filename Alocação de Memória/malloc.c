#include <stdio.h>

int main(){
     int numeros[3];
     numeros[0] = 55;
     numeros[1] = 43;
     numeros[2] = 2;

     printf("A variável 'numero' vale %d e ocupa %ld bytes em memoria\n", numeros[0], sizeof(numeros[0]));

     printf("A variável 'numero' vale %d e ocupa %ld bytes em memoria\n", numeros[1], sizeof(numeros[1]));

     printf("A variável 'numero' vale %d e ocupa %ld bytes em memoria\n", numeros[2], sizeof(numeros[2]));

      printf("A variável 'numero' ocupa %ld bytes em memoria", sizeof(numeros));

     return 0;
}