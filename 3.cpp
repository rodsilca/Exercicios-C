#include <stdio.h>
//Leia um vetor[20]. A seguir, encontre o menor elemento  do vetor e sua posição e mostre para o usuário.

int main()
{
    int vetor[20], menor_num = 1000, pos=0;

    printf("Digite os numeros para o vetor\n");

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        if(vetor[i] < menor_num){
            menor_num = vetor[i];
            pos = i;
        }
    }

    printf("%d é o menor numero e está na posição %d ", menor_num, pos + 1);
    
    return 0;
}
