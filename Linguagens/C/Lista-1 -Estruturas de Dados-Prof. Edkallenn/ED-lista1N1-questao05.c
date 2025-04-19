/*
**    
Função : O exercício solicita que você crie uma função em C chamada soma_fatoriais_inversos que 
recebe um número inteiro positivo n como entrada e calcula a soma dos fatoriais inversos
até o termo n

**    Autor : Lucas Leite Finizola Costa, tuma 3F, terça a noite
**    Data  : 12/04/2025
**    Observações: 
*/


#include <stdio.h>


// Função para calcular fatorial

int fatorial(int n){
    int fat = 1;
    for (int i= 1; i<=n;i++){
        fat *=i;
        // fat = 1 *1 * 2 *3...
    }
    return fat;
}

// Função para calcular a soma dos fatorias inversos
double soma_fatoriais_inversos(int n){
    double soma = 0.0;
    for(int i = 1; i<=n; i++){
        soma = 1.0 / fatorial(i);
    }
    return soma;
}

int main(void){
    int n; 

    printf("Cálculando a soma dos a foriais inversos de n\n");
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    double soma = soma_fatoriais_inversos(n);
    printf("%.6f", soma);
}