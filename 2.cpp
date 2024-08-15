#include <stdio.h>

//Faça um algoritimo que leia um vetor C[50]. Encontre a seguir o maior elemente de C e mostre-o, dizendo se o elemento é par ou impar

int main(){
    int C[50], maior_num =0;

    printf("Digite os numeros para o vetor\n");

    for (int i = 0; i < 50; i++)
    {
        scanf("%d", &C[i]);
    }

    for (int i = 0; i < 50; i++)
    {
        if(C[i] > maior_num){
            maior_num = C[i];
        }
    }

    if(maior_num % 2 == 0){
        printf("O maior numero: %d é par", maior_num);
    }else{
        printf("O maior numero: %d é impar", maior_num);
    }
}