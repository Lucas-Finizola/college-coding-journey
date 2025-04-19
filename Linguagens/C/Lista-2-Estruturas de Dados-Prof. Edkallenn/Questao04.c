#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 100
#define TAM_TELL 20

// criação da estrutura do contato
typedef struct
{
    char nome[TAM_NOME];
    char telefone[TAM_TELL];
    int idade;
} contato;

// função recursiva para listar os contatos
void listar(contato *l, int i, int n)
{
    if (i >= n)
        return;
    printf("contato %d:\n", i + 1);
    printf("nome: %s\n", l[i].nome);
    printf("telefone: %s\n", l[i].telefone);
    printf("idade: %d\n", l[i].idade);
    listar(l, i + 1, n);
}

// função principal
int main()
{
    contato *contatos = NULL;
    int total = 0, opcao;

    do
    {
        // menu que sera exibido na tela
        printf("\n ---- MENU ----\n");
        printf("1 - adicionar\n 2 - listar\n 0 - sair\n opcao: ");
        scanf("%d", &opcao);
        getchar(); // acho que tira os '\n'

        if (opcao == 1)
        {
            contato novo;

            // entrada utilizando fgets
            printf("nome: ");
            fgets(novo.nome, TAM_NOME, stdin);
            novo.nome[strcspn(novo.nome, "\n")] = '\0'; // reomve o \n

            // entrada de telefone
            printf("telefone: ");
            fgets(novo.telefone, TAM_TELL, stdin);
            novo.telefone[strcspn(novo.telefone, "\n")] = '\0';

            // entrada idade
            printf("idade: ");
            scanf("%d", &novo.idade);
            getchar();

            // Realoca memoria para armazenar mais um contato
            contato *tmp = realloc(contatos, (total + 1) * sizeof(contato));
            if (!tmp)
            {
                printf("erro na alocacao\n");
                break; // Sai do loop se der erro
            }

            contatos = tmp;           // Atualiza o ponteiro para o novo bloco
            contatos[total++] = novo; // Adiciona o novo contato ao final
            printf("Contato salvo!\n");
        }

        else if (opcao == 2)
        {
            // Lista os contatos cadastrados
            if (total == 0)
                printf("Nenhum contato ainda.\n");
            else
                listar(contatos, 0, total); // Chamada da funcao recursiva
        }

        // Caso o usuario digite uma opcao invalida
    } while (opcao != 0);

    // Libera toda a memoria alocada antes de sair
    free(contatos);
    printf("memoria liberada.\n");

    return 0;
}
