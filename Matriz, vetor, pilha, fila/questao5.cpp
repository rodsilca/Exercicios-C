#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Encontre o menor elemento em um vetor:�
//Crie um programa em C que pe�a 10 n�meros, armazene-os em um vetor e determine qual elemento � o menor, bem como seu valor. 

main(){
	setlocale(LC_ALL, "Portuguese");

	int numeros[10];
	int menorNum = 999;
	int elemento = 0;
	
	printf("Digite 10 n�meros inteiros:");
	
	for(int i=0; i< 10;i++){
		scanf("%d",&numeros[i]);
		if(numeros[i] <  menorNum){
				menorNum = numeros[i];
				elemento = i;
		}
	}
	printf("Elemento %d � o menor com o Valor: %d ", elemento+1, menorNum);
}
