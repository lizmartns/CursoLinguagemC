#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {  // Define uma função de nome Produto
    int id;       // define como atributos uma id, nome, preço
    char nome[50];
    float preco;
} Produto;

typedef struct { 
    Produto produto;
    int quantidade;
} ItemCarrinho;

void listarProdutos(Produto produtos[], int tamanho) {
    printf("\nProdutos disponíveis:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d - %s (R$ %.2f)\n", produtos[i].id, produtos[i].nome, produtos[i].preco);
    }
}

int adicionarAoCarrinho(Produto produtos[], int tamanhoProdutos, ItemCarrinho carrinho[], int quantidadeCarrinho, int maxCarrinho) {
    if (quantidadeCarrinho >= maxCarrinho) {
        printf("Carrinho cheio! Não é possível adicionar mais itens.\n");
        return quantidadeCarrinho;
    }

    int id, qtd;
    printf("\nDigite o ID do produto que deseja adicionar: ");
    scanf("%d", &id);
    printf("Digite a quantidade: ");
    scanf("%d", &qtd);

    for(int i = 0; i < tamanhoProdutos; i++){
        if (produtos[i].id == id) {
            for (int j = 0; j < quantidadeCarrinho; j++) {
                if (carrinho[j].produto.id == id) {
                    carrinho[j].quantidade += qtd;
                    printf("Produto atualizado no carrinho.\n");
                    return quantidadeCarrinho;
                }
            }

            carrinho[quantidadeCarrinho].produto = produtos[i];
            carrinho[quantidadeCarrinho].quantidade = qtd;
            printf("Produto adicionado ao carrinho.\n");
            return quantidadeCarrinho + 1;
        }
    }
    printf("Produto não encontrado.\n");
    return quantidadeCarrinho;
}

void exibirCarrinho(ItemCarrinho carrinho[], int quantidadeCarrinho) {
    printf("\nCarrinho de compras:\n");
    if (quantidadeCarrinho == 0) {
        printf("O carrinho está vazio.\n");
        return;
    }
    float total = 0;
    for (int i = 0; i < quantidadeCarrinho; i++) {
        printf("%d x %s (R$ %.2f cada) = R$ %.2f\n",
               carrinho[i].quantidade,
               carrinho[i].produto.nome,
               carrinho[i].produto.preco,
               carrinho[i].quantidade * carrinho[i].produto.preco);
        total += carrinho[i].quantidade * carrinho[i].produto.preco;
    }
    printf("Total: R$ %.2f\n", total);
}

int main() {
    int maxProdutos = 5;
    int maxCarrinho = 10;

    Produto produtos[] = {
        {1, "Arroz", 20.50},
        {2, "Feijão", 10.90},
        {3, "Açúcar", 5.80},
        {4, "Óleo", 8.75},
        {5, "Macarrão", 4.50}
    };

    ItemCarrinho carrinho[maxCarrinho];
    int quantidadeCarrinho = 0;

    int opcao;
    do {
        printf("\n=== Sistema de Mercado ===\n");
        printf("1. Listar produtos\n");
        printf("2. Adicionar ao carrinho\n");
        printf("3. Ver carrinho\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listarProdutos(produtos, maxProdutos);
                break;
            case 2:
                quantidadeCarrinho = adicionarAoCarrinho(produtos, maxProdutos, carrinho, quantidadeCarrinho, maxCarrinho);
                break;
            case 3:
                exibirCarrinho(carrinho, quantidadeCarrinho);
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}