#include <stdio.h>
//leia dois vetores de 10 posições e faça a multiplicação dos elementos  de mesmo indice, colocando o resultado em outro vetor.Mostre o valor resultante

int main()
{
    int v1[10], v2[10], res_mult[10];
    printf("Digite os numeros para o vetor 1\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v1[i]);
    }

    printf("Digite os numeros para o vetor 2\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v2[i]);
    }

//multiplicação dos valores de mesmo indice e colocando em um terceiro vetor

    for (int i = 0; i < 10; i++)
    {
        res_mult[i] = v1[i] * v2[i];
    }

    printf("Valores do terceiro vetor:\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d", res_mult[i]);
    }

    return 0;
}
