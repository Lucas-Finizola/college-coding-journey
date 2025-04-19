#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// criação do struct armazenando as informações da matriz
typedef struct
{
    int linhas;
    int colunas;
    int **matriz;
} infoMatriz;

// funçao que aloca memória dinamicamente
int **alocar_Mat(int l, int c)
{
    int **matriz = (int **)malloc(l * sizeof(int));

    // conferindo se a alocação deu certo, caso nao, o programa encerra
    if (matriz == NULL)
    {
        printf("erro na alocacao de memoria\n");
        exit(1);
    }

    // alocando as colunas para cada linha
    for (int i = 0; i < l; i++)
    {
        matriz[i] = (int *)malloc(c * sizeof(int));
        if (matriz[i] == NULL)
        {
            printf("erro na alocacao das linhas\n");
            exit(1);
        }
    }
    return matriz;
}

// funçao para preencher a matriz
void preencher_Mat(int **matriz, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("digite o valor para a matriz[%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}
// função para somar os elementos da matriz
int soma_Mat(int **matriz, int l, int c)
{
    int soma = 0;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}
// função para exibir a matriz na tela
void mostrando_Mat(int **matriz, int l, int c)
{
    printf("\nelementos da matriz:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

// função para liberar a memória
void liberar_mem(infoMatriz *info)
{
    for (int i = 0; i < info->linhas; i++)
    {
        free(info->matriz[i]);
    }
    free(info->matriz);
    free(info);
}

// Funcao principal
int main()
{
    infoMatriz *info = (infoMatriz *)malloc(sizeof(infoMatriz));

    printf("--- MATRIZ DINAMICA ---\n");

    // le o tamanho da matriz
    printf("digite o numero de linhas: ");
    scanf("%d", &info->linhas);

    printf("digite o numero de colunas: ");
    scanf("%d", &info->colunas);

    // Aloca a matriz
    info->matriz = alocar_Mat(info->linhas, info->colunas);

    // Preenche a matriz
    printf("\npreenchendo a matriz:\n");
    preencher_Mat(info->matriz, info->linhas, info->colunas);

    // Exibe a matriz
    mostrando_Mat(info->matriz, info->linhas, info->colunas);

    // Calcula e mostra a soma dos elementos da matriz
    int resultado = soma_Mat(info->matriz, info->linhas, info->colunas);
    printf("\nsoma dos elementos da matriz = %d\n", resultado);

    // Libera toda a memoria usada
    liberar_mem(info);

    return 0;
}