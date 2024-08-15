#include <stdio.h>
//  leia 10 numeros e armazene-os em um vetor, em seguida leia um numero qualquer e verifique  se existe no vetor e informe sua posição 

int main()
{
    int vetor[3], indice = 0, num=0;
    bool verifica; 
    printf("Digite os numeros para o vetor 1\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetor[i]);
    }

//Pedindo um numero do usuario
    printf("Digite um numero:\n");
    scanf("%d", &num);

    for (int i = 0; i < 3; i++)
    {
        if(vetor[i] == num){
            indice = i;
            verifica = true;
        }
    }
//Verificação se existe o numero no vetor ou não
    if(verifica){
        printf("O numero %d se encontra na posicao %d do vetor", num, indice+1);
    }else{
        printf("Numero não encontrado no vetor");
    }

    return 0;
}
