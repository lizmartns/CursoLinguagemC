#include <stdio.h>
#include <string.h>

//union - separa e utliza apenas o espaço da maior variável
union pessoa{
    char nome[100]; // 1 char = 1 byte -> 1 *100 = 100 bytes
    int idade; // 4 bytes -> total 104 bytes
}pes;

int main(){
    strcpy(pes.nome, "Angelina Jolie");
    printf("Dados de %s\n", pes.nome);

    pes.idade = 39;
    printf("Ela tem %d anos.\n", pes.idade);

    printf("A variavel 'pes' esta ocupando %ld bytes em memoria.", sizeof(pes));


    return 0;
}
/*
int main(){

    int numero = 42; //sizeof - tamanho de 
    float nota = 7.9;
    char letra = 'd';
    double outraNota = 19.4;

    printf("A variavel numero tem valor %d e ocupa %ld bytes em memoria\n", numero, sizeof(numero));
    printf("A variavel nota tem valor %f e ocupa %ld bytes em memoria\n", nota, sizeof(nota));
    printf("A variavel letra tem valor %c e ocupa %ld bytes em memoria\n", letra, sizeof(letra));
    printf("A variavel nota tem valor %f e ocupa %ld bytes em memoria\n", outraNota, sizeof(outraNota));

    return 0;
}*/