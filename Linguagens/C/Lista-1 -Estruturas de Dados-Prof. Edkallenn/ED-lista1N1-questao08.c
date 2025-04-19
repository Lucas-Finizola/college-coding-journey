/*
**    
Função :Números de Armstrong
Escreva uma função em C chamada eh_numero_armstrong que recebe um número inteiro positivo
n como entrada e retorna verdadeiro se n for um número de Armstrong, e falso caso contrário.
Usando esta função mostre todos os números de Armstrong entre 1 e 100.

**    Autor : Lucas Leite Finizola Costa, tuma 3F, terça a noite
**    Data  : 12/04/2025
**    Observações: 
*/

/*
a função vai separar os numeros, colocar ao cubo e depois somar
verificar se é igual ao numero incial
*/

#include <stdio.h>

#include <stdio.h>

// Função que faz base^expoente
int potencia(int base, int expoente){
    int resultado = 1;
    for(int i = 0; i < expoente; i++){
        resultado *= base;
    }
    return resultado;
}

// Função que verifica se um número é de Armstrong
int eh_numero_armstrong (int n){
    int n_0 = n;
    int cont = 0;
    int copia = n;

    // 1º passo: contar os dígitos
    while (copia != 0){
        cont++;
        copia = copia / 10;
    }

    int soma = 0;
    copia = n;

    // 2º passo: somar os dígitos elevados à potência
    while (copia != 0){
        int digito = copia % 10;
        soma += potencia(digito, cont);
        copia = copia / 10;
    }

    return soma == n_0;
}

int main(void){
    int n = 0;

    printf("Verificando se é um número de Armstrong:\n");
    printf("Digite um número: ");
    scanf("%d", &n);

    if (eh_numero_armstrong(n)) {
        printf("%d é um número de Armstrong.\n", n);
    } else {
        printf("%d NÃO é um número de Armstrong.\n", n);
    }

    printf("\nNúmeros de Armstrong entre 1 e 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (eh_numero_armstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

