/*
**  Função: Permutação circular
**  Autor: Lucas Leite Finizola Costa, tuma 3F, terça a noite
**  Data: 12/04/2025
**  Observações: AAAAAAAAAAAAAAAAAAAAA
*/


/*função em C chamada permutacao_circular que recebe um array de inteiros
e seu tamanho como entrada, e verifica se ele é uma permutação circular de outro array de 
inteiros do mesmo tamanho. A função deve retornar 1 se for uma permutação circular e 0 caso contrário.
Use alocação dinâmica.*/


#include <stdio.h>
#include <stdlib.h>

int permutacao_circular(int *a, int *b, int n)
{
    int *aux = (int *)malloc(n * sizeof(int));
    if (aux == NULL)
    {
        return 0;
    }

    for (int rot = 0; rot < n; rot++)
    {
        for (int i = 0; i < n; i++)
        {
            int index = (i - rot + n) % n;
            aux[i] = a[index];
        }

        int iguais = 1;
        for (int j = 0; j < n; j++)
        {
            if (aux[j] != b[j])
            {
                iguais = 0;
                break;
            }
        }

        if (iguais)
        {
            free(aux);
            return 1;
        }
    }

    free(aux);
    return 0;
}

int main()
{
    int vetor1[] = {1, 2, 3, 4};
    int vetor2[] = {4, 1, 2, 3};
    int tamanho = 4;

    if (permutacao_circular(vetor1, vetor2, tamanho))
    {
        printf("Os vetores sao permutacoes circulares.\n");
    }
    else
    {
        printf("Os vetores NAO sao permutacoes circulares.\n");
    }

    return 0;
}
