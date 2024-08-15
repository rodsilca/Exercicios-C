#include <stdio.h>

//Faça um algoritimo que leia dois vetores: F[20] e G[20]. Calcule e mostre a soma dos valores de cada vetor

int main()
{
    int F[4], G[4], somaF = 0, somaG = 0;
    printf("Digite os numeros para o vetor F\n");

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &F[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        somaF += F[i];
    }

    printf("Digite os numeros para o vetor G\n");

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &G[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        somaG += G[i];
    }
    
    printf("A soma dos valores do vetor F: %d e do vetor G: %d", somaF, somaG);
    
    return 0;
}
