/*
**    
Função : A função que você precisa criar em C, chamada eh_numero_carmichael, deve receber um número inteiro positivo n como entrada e verificar se ele é um número de Carmichael ou não

**    Autor : Lucas Leite Finizola Costa, tuma 3F, terça a noite
**    Data  : 12/04/2025
**    Observações: realizar a verificação sem a modularização estourou a váriavel n
*/


#include <stdio.h>

//para simplificar as expotenciações, vai ser nessário modularizar e evitar estouro de várival
int expo_modular(int base, int expoente, int mod){
    int conta_mod = 1;
    while (expoente > 0)
    {
        if (expoente % 2 == 1) { // se expoente for ímpar
            conta_mod = (conta_mod * base) % mod;
        }
        base = (base * base) % mod;
        expoente = expoente / 2;
    }
    return conta_mod;
}

//função para verificar se o maximo dividor comum é 1
int MDC_1(int a, int b){
    while(b!=0){
        int resultado = a % b;
        a = b;
        b = resultado;
    }
    if(a == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int eh_composto(int n) {
    if (n < 4) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 1; 
        }
    }
    return 0; 
}
/*
Verificar se n é composto. se não for, retorna 0 direto.
Para cada a de 2 até n-1:
Se MDC(a, n) == 1 (ou seja, a e n são coprimos):
Verificar se a^n % n == a
Se não for, n não é número de Carmichael → retorna 0
*/


int eh_numero_carmichael(int n){

    if (!eh_composto(n)){
        return 0;
    }
    for (int a = 2; a < n; a++) {
        if (MDC_1(a, n)) { 
            if (expo_modular(a, n, n) != a) {
                return 0; 
            }
        }
    }

    return 1; 

    }

int main(void){

    int n;

    printf("Digite o valor de N: \n");
    scanf("%d", &n);

    int teste = eh_numero_carmichael(n);
    if(teste == 1){
        printf("O numero %d é camrichael",n);
    }else{
        printf("O numero %d não é camrichael",n);
    }
    
    
}

