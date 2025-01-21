#include <stdio.h>
#include <string.h>

// Estrutura para armazenar informações da conta
typedef struct {
    int numeroConta;
    char nome[50];
    float saldo;
}Conta;

// Funções do sistema
int criarConta(Conta contas[], int totalContas);
void consultarSaldo(Conta contas[], int totalContas);
void depositar(Conta contas[], int totalContas);
void sacar(Conta contas[], int totalContas);
void transferir(Conta contas[], int totalContas);

int main() {
    Conta contas[100]; // Limite de 100 contas
    int totalContas = 0;
    int opcao;

    do {
        // Menu do sistema
        printf("\n--- Sistema Bancário ---\n");
        printf("1. Criar Conta\n");
        printf("2. Consultar Saldo\n");
        printf("3. Depositar\n");
        printf("4. Sacar\n");
        printf("5. Transferir\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                totalContas = criarConta(contas, totalContas);
                break;
            case 2:
                consultarSaldo(contas, totalContas);
                break;
            case 3:
                depositar(contas, totalContas);
                break;
            case 4:
                sacar(contas, totalContas);
                break;
            case 5:
                transferir(contas, totalContas);
                break;
            case 6:
                printf("Saindo do sistema. Obrigado!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}

// Função para criar uma nova conta
int criarConta(Conta contas[], int totalContas) {
    if (totalContas >= 100) {
        printf("Limite de contas atingido.\n");
        return totalContas;
    }

    printf("\n--- Criar Conta ---\n");
    printf("Digite o número da conta: ");
    scanf("%d", &contas[totalContas].numeroConta);
    printf("Digite o nome do titular: ");
    scanf(" %[^\n]s", contas[totalContas].nome);
    contas[totalContas].saldo = 0.0;

    printf("Conta criada com sucesso!\n");
    totalContas++;
    return totalContas;
}

// Função para consultar o saldo de uma conta
void consultarSaldo(Conta contas[], int totalContas) {
    int numeroConta, i;
    printf("\n--- Consultar Saldo ---\n");
    printf("Digite o número da conta: ");
    scanf("%d", &numeroConta);

    for (i = 0; i < totalContas; i++) {
        if (contas[i].numeroConta == numeroConta) {
            printf("Titular: %s\n", contas[i].nome);
            printf("Saldo: R$ %.2f\n", contas[i].saldo);
            return;
        }
    }
    printf("Conta não encontrada.\n");
}

// Função para depositar dinheiro em uma conta
void depositar(Conta contas[], int totalContas) {
    int numeroConta, i;
    float valor;

    printf("\n--- Depositar ---\n");
    printf("Digite o número da conta: ");
    scanf("%d", &numeroConta);

    for (i = 0; i < totalContas; i++) {
        if (contas[i].numeroConta == numeroConta) {
            printf("Digite o valor a depositar: ");
            scanf("%f", &valor);

            if (valor > 0) {
                contas[i].saldo += valor;
                printf("Depósito realizado com sucesso!\n");
                return;
            } else {
                printf("Valor inválido.\n");
                return;
            }
        }
    }
    printf("Conta não encontrada.\n");
}

// Função para sacar dinheiro de uma conta
void sacar(Conta contas[], int totalContas) {
    int numeroConta, i;
    float valor;

    printf("\n--- Sacar ---\n");
    printf("Digite o número da conta: ");
    scanf("%d", &numeroConta);

    for (i = 0; i < totalContas; i++) {
        if (contas[i].numeroConta == numeroConta) {
            printf("Digite o valor a sacar: ");
            scanf("%f", &valor);

            if (valor > 0 && valor <= contas[i].saldo) {
                contas[i].saldo -= valor;
                printf("Saque realizado com sucesso!\n");
                return;
            } else {
                printf("Saldo insuficiente ou valor inválido.\n");
                return;
            }
        }
    }
    printf("Conta não encontrada.\n");
}

// Função para transferir dinheiro entre contas
void transferir(Conta contas[], int totalContas) {
    int contaOrigem, contaDestino, i, j;
    float valor;

    printf("\n--- Transferir ---\n");
    printf("Digite o número da conta de origem: ");
    scanf("%d", &contaOrigem);
    printf("Digite o número da conta de destino: ");
    scanf("%d", &contaDestino);

    for (i = 0; i < totalContas; i++) {
        if (contas[i].numeroConta == contaOrigem) {
            for (j = 0; j < totalContas; j++) {
                if (contas[j].numeroConta == contaDestino) {
                    printf("Digite o valor a transferir: ");
                    scanf("%f", &valor);

                    if (valor > 0 && valor <= contas[i].saldo) {
                        contas[i].saldo -= valor;
                        contas[j].saldo += valor;
                        printf("Transferência realizada com sucesso!\n");
                        return;
                    } else {
                        printf("Saldo insuficiente ou valor inválido.\n");
                        return;
                    }
                }
            }
            printf("Conta de destino não encontrada.\n");
            return;
        }
    }
    printf("Conta de origem não encontrada.\n");
}