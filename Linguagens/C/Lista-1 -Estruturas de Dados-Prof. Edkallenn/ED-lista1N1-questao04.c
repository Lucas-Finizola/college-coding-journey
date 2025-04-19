/*
**  Função: Verificar numeros automorficos
**  Autor: Lucas Leite Finizola Costa, turma 3F, Terça a noite
**  Data: 12/04/2025
**  Observações: sem observações
*/
#include <stdio.h>
#include <stdlib.h>

int verificar_numero_automorfico(int numero)
{
    int quadrado = numero * numero;
    int copia = numero;
    int contador = 0;

    while (copia > 0)
    {
        contador++;
        copia /= 10;
    }

    int multiplicador = 1;
    for (int i = 0; i < contador; i++)
    {
        multiplicador *= 10;
    }

    return (quadrado % multiplicador == numero);
}

void mostrar_automorficos_entre_2_e_1000()
{
    printf("Números automórficos entre 2 e 1000:\n");

    for (int i = 2; i <= 1000; i++)
    {
        if (verificar_numero_automorfico(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int limite;
    mostrar_automorficos_entre_2_e_1000();

    printf("\nInforme um valor inteiro positivo (>= 2): ");
    scanf("%d", &limite);

    if (limite < 2)
    {
        printf("Valor inválido! Digite um número a partir de 2.\n");
        return 1;
    }

    int *automorficos = (int *)malloc((limite - 1) * sizeof(int));
    if (automorficos == NULL)
    {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    int total = 0;

    for (int i = 2; i <= limite; i++)
    {
        if (verificar_numero_automorfico(i))
        {
            automorficos[total++] = i;
        }
    }

    if (total > 0)
    {
        printf("Automórficos entre 2 e %d:\n", limite);
        for (int i = 0; i < total; i++)
        {
            printf("%d ", automorficos[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Nenhum número automórfico encontrado até %d.\n", limite);
    }

    free(automorficos);
    return 0;
}