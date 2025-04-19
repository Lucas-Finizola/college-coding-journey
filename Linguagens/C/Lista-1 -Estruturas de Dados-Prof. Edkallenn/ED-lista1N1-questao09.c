/*
**    
**    Função:
Escreva uma função em C chamada eh_numero_perfeito que recebe um número inteiro positivo
n como entrada e retorna verdadeiro se n for um número perfeito, e falso caso contrário.
Usando esta função, exiba todos os números perfeitos entre 1 e 100000.

**    Autor : Lucas Leite Finizola Costa, turma 3F, terça à noite
**    Data  : 12/04/2025
**    Observações: 
*/

#include <stdio.h>

/*
    Um número n é perfeito se a soma de seus divisores próprios (exceto ele mesmo) for igual a n.
*/
int eh_numero_perfeito(int n) {
    int conta = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            conta += i;
        }
    }
    return conta == n;
}

int main(void) {
    int num;
    printf("Verificando se um número é perfeito: \n");
    printf("Digite um número: ");
    scanf("%d", &num);

    if (eh_numero_perfeito(num)) {
        printf("\nO número [%d] é um número perfeito!\n", num);
    } else {
        printf("\nEle não é perfeito.\n");
    }

    printf("\nMostrando os números perfeitos de 1 até 100000:\n");

    for (int i = 1; i <= 100000; i++) {
        if (eh_numero_perfeito(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
