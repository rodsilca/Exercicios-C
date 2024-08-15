#include <stdio.h>

//Leia 15 numeros e armazene-os em um vetor, em seguida leia  um numero qualquer e verifique quantas vezes existe no vetor. 
int main()
{
    int vetor[15], num=0, contador=0;
    bool verifica; 
    printf("Digite os numeros para o vetor 1\n");

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &vetor[i]);
    }

//Pedindo um numero do usuario
    printf("Digite um numero:\n");
    scanf("%d", &num);

//Percorrendo o vetor e verificando se o numero existe no vetor
    for (int i = 0; i < 15; i++)
    {
        if(vetor[i] == num){
            contador +=1;
            verifica = true;
        }
    }
//Verificação se existe o numero no vetor ou não
    if(verifica){
        printf("O numero %d aparece %d vez(es) no vetor", num, contador);
    }else{
        printf("Numero não encontrado no vetor");
    }

    return 0;
}