#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Encontre o maior elemento em um vetor:�
//Crie um programa em C que pe�a 10 n�meros, armazene-os em um vetor e determine qual elemento � o maior, bem como seu valor

main(){
	setlocale(LC_ALL, "Portuguese");

	int numeros[10];
	int maiorNum =0;
	int elemento = 0;
	
	printf("Digite 10 numeros inteiros: \n");
	
	for(int i=0; i< 10;i++){
		scanf("%d",&numeros[i]);
		if(numeros[i] > maiorNum){
				maiorNum = numeros[i];
				elemento = i;
		}
	}
	printf("Elemento %d � o maior com o Valor: %d ", elemento+1, maiorNum);
}
