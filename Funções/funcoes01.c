#include <stdio.h>
//funções - 
/*estrutura :
- tipo de retorno
- nome 
- parametros de entrada
- implementação
- retorno (opcional)
*/

void mensagem(){
    printf("Bem vindo!\n");
}
int soma(int num1, int num2){
    int res = num1 + num2;
    return res;
}
void proximo_char(char caractere){
    printf("%c", caractere+1);
}
int main(){
    mensagem();
    
    printf("retorno = %d\n", soma(4,6));
    char cara = 'a';
    proximo_char(cara);
    return 0 ; //0 significa que foi bem sucedido
}
