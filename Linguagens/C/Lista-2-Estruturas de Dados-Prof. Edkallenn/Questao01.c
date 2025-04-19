#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// criando a struct para o cadastro
// foi utilizado typedef para facilitar a futura utilização 
typedef struct cadastro {
    char nome[50];
    int idade;
    float nota;
} Alunos;


// alocando os alunos
Alunos* alocar_alunos(int n) {
    Alunos* alunos = malloc(n * sizeof(Alunos));
    // malloc -> guardar um espaço na memória 
    // (tamanho * sizeof(o que deseja mudar o tamanho) )

    if (alunos == NULL) {
        printf("Não foi possível alocar memória");
        exit(1);
        // para evitar acessar o ponteiro em caso de falhas
    }
    return alunos;
}

Alunos* realocar_alunos(Alunos* alunos, int* n, int novos) {
    *n = *n + novos;
    // tentei procurar uma forma de que, caso coloque um valor menor, não diminua o array
    // então a função vai alterar o valor da variável 
    Alunos* novatos = realloc(alunos, *n * sizeof(Alunos));
    if (novatos == NULL) {
        printf("Não foi possível alocar memória");
        free(alunos);
        exit(1);
        // para evitar acessar o ponteiro em caso de falhas
    }
    return novatos;
}

void preencher_alunos(Alunos* alunos, int start, int end) {
    int a = 1; 
    for (int i = start; i < end; i++) {
        getchar(); 
        printf("Digite o nome do [%d]º estudante: ", a);
        fgets(alunos[i].nome, 50, stdin);
        // stdin é o método de entrada do teclado
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        // strcspn serve para remover o enter (\n) do nome

        // preenchendo nota e idade
        printf("\nDigite a idade de [%s]: ", alunos[i].nome);
        scanf("%d", &alunos[i].idade);
        // & serve para alterar o valor da variável dentro da função

        printf("\nDigite a nota de [%s]: ", alunos[i].nome);
        scanf("%f", &alunos[i].nota);
        a++;
    }
}

// imprimindo os alunos recursivamente
void imprimir_alunos_recursivo(Alunos* alunos, int i, int n) {
    if (i >= n) return;

    printf("\nAluno %d:\n", i + 1);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Idade: %d\n", alunos[i].idade);
    printf("Nota: %.2f\n", alunos[i].nota);

    imprimir_alunos_recursivo(alunos, i + 1, n);
}

// calculando a média das notas dos alunos
float media_notas(Alunos* alunos, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += alunos[i].nota;
    }
    return soma / n;
}


int main(void) {
    int n, novatos;
    char check;
    Alunos* alunos;

    printf("Cadastro de alunos\n");
    printf("Quantos alunos você deseja cadastrar? ");
    scanf("%d", &n);

    alunos = alocar_alunos(n);
    preencher_alunos(alunos, 0, n);

    // Loop para aceitar apenas S ou N
    while (1) {
        getchar(); // limpa o \n
        printf("\nVocê deseja cadastrar novos alunos? (S/N): ");
        scanf("%c", &check);

        if (check == 's' || check == 'S') {
            printf("Quantos alunos você deseja adicionar? ");
            scanf("%d", &novatos);

            int n0 = n;
            alunos = realocar_alunos(alunos, &n, novatos);
            preencher_alunos(alunos, n0, n);
            break;
        }
        else if (check == 'n' || check == 'N') {
            printf("\nSegue a lista de alunos:\n");
            break;
        }
        else {
            printf("Opção inválida! Digite apenas S ou N.\n");
        }
    }

    // imprimir alunos recursivamente
    imprimir_alunos_recursivo(alunos, 0, n);

    float media = media_notas(alunos, n);
    printf("\nA média da sala é de: %.2f\n", media);

    // liberando memória
    free(alunos);

    return 0;
}
