
/*
**    
Função :Um número feliz é definido pelo seguinte processo:
comece com qualquer número inteiro positivo e substitua o número pela soma dos quadrados dos seus dígitos.
Repita o processo até que o número se torne 1 ou entre em um ciclo infinito que não inclui 1.
Se o processo terminar com 1, então o número é considerado feliz; caso contrário, é infeliz.

**    Autor : Lucas Leite Finizola Costa, tuma 3F, terça a noite
**    Data  : 12/04/2025
**    Observações: Eu não fiquei feliz não
*/


#include <stdio.h>


/*
Pegar número atual.
Separarmos cada dígito dele.
Elevar cada dígito ao quadrado.
Somar tudo.
Pegar resultado e repetir o processo.
Verificar no em um array, se o numero já foi visitado
*/

/*é necessário separar os numeros inteiros, depois fazer a expotenciação de ambos e somar*/

int soma_quadrados(int n){
    int soma = 0;
    while(n > 0){
        int num = n % 10; // isolando o ultimo digito
        soma  += num*num; 
        // soma  = 10*10+soma
        n = n/10;
    }
    return soma;
}


int eh_numero_feliz(int n){
    int percuso_feliz[500] = {0};
    while (percuso_feliz[n] == 0 && n!=1){
        percuso_feliz[n] = 1;
        n = soma_quadrados(n);
    }
    if(n == 1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){

    int n;
    printf("Digite um numero e verifique se ele é feliz: ");
    scanf("%d", &n);

    int teste_feliz = eh_numero_feliz(n);
    
    if(teste_feliz == 1){
        printf("O número digitado é Feliz");
    } 
    else{
        printf("O número ditado é infeliz");
    }
        
}
