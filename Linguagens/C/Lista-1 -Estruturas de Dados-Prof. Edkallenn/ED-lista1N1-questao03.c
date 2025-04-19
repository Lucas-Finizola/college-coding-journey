/*
**  Função: Verificação de números amigáveis
**  Autor: Lucas Leite Finizola Costa, turma 3F, Terça a noite
**  Data: 12/04/2025
**  Observações: aonde tá o amigável nisso?
*/
#include <stdio.h>

// Exibe e soma os divisores próprios de um número
int exibirDivisores(int num) {
    int soma = 0;
    printf("Divisores de %d: ", num);
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nSoma dos divisores de %d: %d\n", num, soma);
    return soma;
}

// Soma dos divisores (sem exibir)
int somaDivisores(int num) {
    int soma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

// Checa se dois números são amigáveis
void verificarAmigaveis(int a, int b) {
    int somaA = exibirDivisores(a);
    int somaB = exibirDivisores(b);

    if (somaA == b && somaB == a) {
        printf("%d e %d são amigáveis!\n", a, b);
    } else {
        printf("Esses números não são amigáveis.\n");
    }
}

// Lista pares amigáveis até um limite
void listarParesAmigaveis(int limite) {
    int temPares = 0;

    printf("\nVerificando pares amigáveis até %d:\n", limite);
    for (int x = 1; x < limite; x++) {
        int y = somaDivisores(x);
        if (y > x && y <= limite) {
            if (somaDivisores(y) == x) {
                printf("%d e %d são amigáveis\n", x, y);
                temPares = 1;
            }
        }
    }

    if (!temPares) {
        printf("Nenhum par amigável encontrado até %d.\n", limite);
    }
}

int main() {
    int n1, n2, lim;

    printf("Digite dois números para verificar se são amigáveis: ");
    scanf("%d %d", &n1, &n2);

    verificarAmigaveis(n1, n2);

    printf("\nAgora informe um limite para buscar pares amigáveis: ");
    scanf("%d", &lim);

    listarParesAmigaveis(lim);

    return 0;
}