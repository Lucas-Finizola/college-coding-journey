#include <stdio.h>


/*TRABALHO PARA ENTREGAR 06/10/2024*/
//ALUNO: LUCAS LEITE FINIZOLA COSTA

 /*QUESTÃO 1*/

 /*
Escreva um programa em C que crie uma matriz 2x2 de inteiros.
Leia os valores da matriz a partir do teclado.
Exiba a soma de todos os elementos da matriz.


 int main(void){
    
    int m_2x2[2][3];


    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("Digite o elemento matriz[%d][%d]: ",i, j );
            scanf("%d",&m_2x2[i][j]);
        }
    }
        m_2x2[0][3] = m_2x2[0][0] + m_2x2[0][1];
        m_2x2[1][3] = m_2x2[1][0] + m_2x2[1][1];
        int soma = m_2x2[0][3]+m_2x2[1][3];
        printf("%d",soma);

}

*/

/*QUESTÃO 2*/

/*
Escreva um programa em C que leia um vetor de 10 inteiros,
encontre e exiba o maior valor presente nesse vetor.
*/
/*
int main(void){
    int ver_10[10];
    int maior = 0;

    for(int i=0; i<10; i++){
        printf("Digite o indice [%d]: ", i);
        scanf("%d", &ver_10[i]);
    }
    for(int i = 0; i<10; i++){
        if (maior < ver_10[i] ){
           maior = ver_10[i];
        }
    }
    printf("O maior valor: %d", maior);
}
*/


/*QUESTÃO 3*/
/*
Crie um programa em C que leia uma matriz 3x3 
Multiplique todos os seus elementos por um número inteiro fornecido pelo usuário.
Exiba a matriz resultante.
*/

int main(void){

    int M3x3[3][3];
    int M;
    int MM[3][3];

    /*For para a primeira matriz*/
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite o valor do indice[%d][%d]: ", i, j);
            scanf("%d", &M3x3[i][j]);
        }
    }
    /*Váriavel para multiplicar*/
    printf("Digite o expoente desejado: ");
    scanf("%d", &M);

    /*For para multiplicar e gerar a segunda matriz*/
    for(int i = 0; i<3; i++){
        for(int j=0; j<3; j++){
            MM[i][j] = M3x3[i][j] * M;
        }
    }
    /*For para mostra as duas tabelas*/
    printf("Matriz original\n");
    for(int i = 0; i<3; i++){
        printf("\n");
        for(int j = 0; j<3; j++){
            printf("[%d]", M3x3[i][j]);
        }
    }
    printf("\nMatriz multiplicada pelo expoente [%d]: ", M);
    for(int i = 0; i<3; i++){
        printf("\n");
        for(int j = 0; j<3; j++){
            printf("[%d]", MM[i][j]);
        }
    }
}


