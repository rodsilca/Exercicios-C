#include <stdio.h>

//Faça um algoritimo que leia um vetor[6]. 
//CONTE a seguir, quantos valores de v são negativos e mostre essa informação

int main(){
    int vetor[6], cont=0;
    printf("Digite os numeros para o vetor\n");

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if(vetor[i] < 0){
            cont++;
        } 
    }

    printf("Existem %d numeros negativos no vetor", cont);

    return 0;
}
