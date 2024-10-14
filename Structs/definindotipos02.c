#include <stdio.h>
#include <string.h>

//structs - estrutura de dados

struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}aluno[5]; //uma forma de declarar

int main(){
    //struct st_aluno aluno1; -outra forma de declarar-
    for(int i=0; i<5; i++){
        printf("Informe a matricula do aluno: ");
        fgets(aluno[i].matricula, 10, stdin);

        printf("Informe o nome do aluno: ");
        fgets(aluno[i].nome, 100, stdin);

        printf("Informe o curso do aluno: ");
        fgets(aluno[i].curso, 50, stdin);

        printf("Informe o ano de nascimento do aluno: ");
        scanf("%d", &aluno[i].ano_nascimento);
        getchar();//não receber o enter e ir para o próximo campo
        }

    for(int i=0; i<5; i++){
        printf("=========== Dados do Aluno %d ==============\n",(i+1));
        printf("Matricula: %s", aluno[i].matricula);
        printf("Nome: %s", aluno[i].nome);
        printf("Curso: %s", aluno[i].curso);
        printf("Ano de Nascimento: %d\n", aluno[i].ano_nascimento);
    }
    return 0;
}