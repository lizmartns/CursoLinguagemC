#include <stdio.h>
#include <string.h>

//structs - estrutura de dados

struct st_contato{
    char nome[10];
    int ano_nascimento;
    char telefone[100];
    char email[100];   
}; 
struct st_agenda{
    struct st_contato contatos[100];
}agenda;

int main(){
    
    for(int i=0; i<3; i++){
        printf("Informe o nome: ");
        fgets(agenda.contatos[i].nome, 100, stdin);

        printf("Informe o ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar();

        printf("Informe o telefone: ");
        fgets(agenda.contatos[i].telefone, 20, stdin);

        printf("Informe o email: ");
        fgets(agenda.contatos[i].email, 100,stdin);
        
        }
    printf("=========== Agenda de Contato ==============\n");
    for(int i=0; i<3; i++){
        printf("=========== Agenda de Contato %d ==============\n",(i+1));
        printf("=========== Contato %d ============\n", (i+1));
        printf("Nome: %s",agenda.contatos[i].nome);
        printf("Ano de Nascimento: %d\n", agenda.contatos[i].ano_nascimento);
        printf("Telefone: %s", agenda.contatos[i].telefone);
        printf("E-mail: %s", agenda.contatos[i].email);
        //printf("Nome: %s",strtok(agenda.contatos[i].nome));  strtok reconhece se tem um enter e um \n e remove para não pular linha duas vezes
    }
    return 0;
}