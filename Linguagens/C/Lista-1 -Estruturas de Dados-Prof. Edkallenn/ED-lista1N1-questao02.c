/*
**  Função:  Fatorial Duplo
**  Autor: Lucas Leite Finizola Costa, turma 3F, Terça a noite
**  Data: 12/04/2025
**  Observações: sem observações

Função em C chamada potencia_fatorial_crescente que recebe dois parâmetros, x e n, e retorna o resultado da potência fatorial crescente de x elevado a n. 
Em seguida, escreva outra função chamada potencia_fatorial_decrescente
*/


#include <stdio.h>

// Função para calcular o fatorial normal
int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

// Função para calcular o fatorial duplo (descendo de 2 em 2)
int fatorial_duplo(int n) {
    int fat = 1;
    for (int i = n; i >= 1; i -= 2) {
        fat *= i;
    }
    return fat;
}

int main() {
    int fat_normal[21];
    int fat_duplo[21];

    // Preenche os vetores com os resultados
    for (int i = 2; i <= 20; i++) {
        fat_normal[i] = fatorial(i);
        fat_duplo[i] = fatorial_duplo(i);
    }

    // Imprime a tabela com os valores
    printf("N  | Fatorial Normal | Fatorial Duplo\n");
    printf("---------------------------------------\n");
    for (int i = 2; i <= 20; i++) {
        printf("%2d | %15d | %14d\n", i, fat_normal[i], fat_duplo[i]);
    }

    // Tabela com a diferença
    printf("\nN  | Normal | Duplo | Diferença\n");
    printf("------------------------------------\n");
    for (int i = 2; i <= 20; i++) {
        int dif = fat_duplo[i] - fat_normal[i];
        printf("%2d | %7d | %6d | %9d\n", i, fat_normal[i], fat_duplo[i], dif);
    }

    return 0;
}