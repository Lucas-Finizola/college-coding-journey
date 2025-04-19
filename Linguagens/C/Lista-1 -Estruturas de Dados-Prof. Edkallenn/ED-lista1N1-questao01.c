/*
**  Função: Potência Fatorial
**  Autor: Romana Cristina Oliveira do Nascimento, turma 3F, Terça a noite 
**  Data: 12/04/2025
**  Observações: sem observações
*/
#include <stdio.h>

// Potência fatorial crescente: x * (x + 1) * ... (n termos)
int potencia_fatorial_crescente(int x, int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= (x + i);
    }
    return resultado;
}

// Potência fatorial decrescente: x * (x - 1) * ... (n termos)
int potencia_fatorial_decrescente(int x, int n) {
    int resultado = 1;
    for (int i = 0; i < n; i++) {
        resultado *= (x - i);
    }
    return resultado;
}

int main() {
    int base, termos;

    // Primeira tabela: base fixa, termos variando
    base = 5;
    printf("Resultados com base fixa (x = %d) e n variando de 2 a 10\n", base);
    printf("----------------------------------------------------------\n");
    printf(" n | Pot. Crescente | Pot. Decrescente\n");
    printf("---------------------------------------\n");

    for (termos = 2; termos <= 10; termos++) {
        printf("%2d | %15d | %17d\n", termos,
            potencia_fatorial_crescente(base, termos),
            potencia_fatorial_decrescente(base, termos));
    }

    // Segunda tabela: termos fixos, base variando
    termos = 5;
    printf("\nResultados com n fixo (%d) e x variando de 2 a 10\n", termos);
    printf("----------------------------------------------------------\n");
    printf(" x | Pot. Crescente | Pot. Decrescente\n");
    printf("---------------------------------------\n");

    for (base = 2; base <= 10; base++) {
        printf("%2d | %15d | %17d\n", base,
            potencia_fatorial_crescente(base, termos),
            potencia_fatorial_decrescente(base, termos));
    }

    return 0;
}