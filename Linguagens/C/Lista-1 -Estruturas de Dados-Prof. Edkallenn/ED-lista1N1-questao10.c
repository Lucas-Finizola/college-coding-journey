/*
**    
**    Função:
Escreva uma função em C chamada fibonacci_max que recebe um número inteiro max como entrada
e retorna um array contendo todos os números da série de Fibonacci que sejam menores ou iguais a max.
O array retornado deve terminar com um marcador de posição especial, como -1.
Use alocação dinâmica.

**    Autor : Lucas Leite Finizola Costa, turma 3F, terça à noite
**    Data  : 12/04/2025
**    Observações: SEM COMENTÁRIOS
*/


#include <stdio.h>
#include <stdlib.h>

/* sequencia de fibonacci
- vai ter um valor maximo do resultado do fibonacci 
- vai ter que ser alocado em array
- vai ter uma alocação dinaminca 
- vai terminar em uma posição especial a -1
*/


#include <stdio.h>
#include <stdlib.h>

int* fibonacci_max(int max) {
    // Inicia com um tamanho fixo para o array
    int tamanho = 10;
    int* fibo = (int*)malloc(tamanho * sizeof(int));

    if (fibo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    int a = 0, b = 1;
    int i = 0;
    // Preenche o array com a sequência de Fibonacci até o valor máximo
    while (a <= max) {
        // Se o array ficar cheio, aumenta o tamanho
        if (i >= tamanho) {
            tamanho *= 2;  // Dobra o tamanho do array
            fibo = (int*)realloc(fibo, tamanho * sizeof(int));
            if (fibo == NULL) {
                printf("Erro ao realocar memória.\n");
                exit(1);
            }
        }

        // Adiciona o número atual da sequência no array
        fibo[i++] = a;

        // Gera o próximo número de Fibonacci
        int c = a + b;
        a = b;
        b = c;
    }

    // Marca o fim do array com -1
    fibo[i] = -1;

    return fibo;
}

int main() {
    int max;

    printf("Digite o valor máximo para a série de Fibonacci: ");
    scanf("%d", &max);

    // Chama a função para gerar a série de Fibonacci
    int* resultado = fibonacci_max(max);

    // Exibe a série gerada
    printf("Série de Fibonacci até %d:\n", max);
    int i = 0;
    while (resultado[i] != -1) {
        printf("[%d]", resultado[i]);
        i++;
    }
    printf("[%d]", resultado[i]);
    printf("\n");

    // Libera a memória alocada
    free(resultado);

    return 0;
}
