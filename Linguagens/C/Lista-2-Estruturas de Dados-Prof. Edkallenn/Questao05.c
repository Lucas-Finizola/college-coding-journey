#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 100
#define ESTOQUE_MINIMO 5

// Definindo a estrutura do produto
typedef struct {
    char nome[MAX_NOME];
    float preco;
    int quantidade;
} Produto;

// Função para adicionar novos produtos ao vetor
Produto* adicionar_produtos(Produto* lista, int* total, int novos) {
    *total += novos;
    Produto* temp = realloc(lista, (*total) * sizeof(Produto));
    if (!temp) {
        fprintf(stderr, "Erro ao realocar memória para produtos.\n");
        free(lista);
        exit(EXIT_FAILURE);
    }
    return temp;
}

// Preenche os produtos do índice inicial até o final
void preencher_produtos(Produto* lista, int inicio, int fim) {
    for (int i = inicio; i < fim; i++) {
        getchar(); // Limpa o buffer
        printf("\nProduto [%d]\n", i + 1);

        printf("Nome: ");
        fgets(lista[i].nome, MAX_NOME, stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';

        printf("Preço (R$): ");
        scanf("%f", &lista[i].preco);

        printf("Quantidade em estoque: ");
        scanf("%d", &lista[i].quantidade);
    }
}

// Calcula o valor total de todos os produtos no estoque
float calcular_valor_total(Produto* lista, int total) {
    float soma = 0;
    for (int i = 0; i < total; i++) {
        soma += lista[i].preco * lista[i].quantidade;
    }
    return soma;
}

// Lista produtos com quantidade menor que 5, de forma recursiva
void listar_estoque_baixo(Produto* lista, int idx, int total) {
    if (idx >= total) return;

    if (lista[idx].quantidade < ESTOQUE_MINIMO) {
        printf("\n[Estoque Baixo] Produto: %s\n", lista[idx].nome);
        printf("Preço: R$ %.2f\n", lista[idx].preco);
        printf("Quantidade: %d\n", lista[idx].quantidade);
    }

    listar_estoque_baixo(lista, idx + 1, total);
}

int main() {
    Produto* estoque = NULL;
    int total = 0, qtd_novos;
    char opcao;

    printf("Sistema de Produtos - Estoque Dinâmico\n");
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &qtd_novos);

    estoque = adicionar_produtos(estoque, &total, qtd_novos);
    preencher_produtos(estoque, 0, total);

    getchar(); // limpar buffer
    printf("\nDeseja adicionar mais produtos? (S/N): ");
    scanf("%c", &opcao);

    if (opcao == 'S' || opcao == 's') {
        printf("Quantos produtos a mais? ");
        scanf("%d", &qtd_novos);
        int inicio = total;
        estoque = adicionar_produtos(estoque, &total, qtd_novos);
        preencher_produtos(estoque, inicio, total);
    }

    printf("\n--- RELATÓRIO ---\n");

    printf("\nValor total em estoque: R$ %.2f\n", calcular_valor_total(estoque, total));

    printf("\nProdutos com estoque abaixo de %d unidades:\n", ESTOQUE_MINIMO);
    listar_estoque_baixo(estoque, 0, total);

    free(estoque);
    printf("\nMemória liberada. Encerrando o programa.\n");

    return 0;
}
