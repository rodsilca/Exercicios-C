#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Verifique se um número está em um vetor: Gere aleatoriamente 10 números e armazene-os em um vetor. 
//Em seguida, peça ao usuário para digitar um número e verifique se ele está presente no vetor. 
//Se estiver, indique a posição em que ele se encontra. 

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[10] = {9,2,436,7,34,3534,63,364,30,6};
	int verNum = 0; 
	int status =0;
	
	printf("Digite um numero: \n");
	scanf("%d",&verNum);
	
	for(int i=0; i<10;i++){
		if(verNum == vetor[i]){
			printf("O número %d está na posição %d do vetor", verNum, i+1);
			status =1;
			break;
		}
	}
	
	if(status ==0){
		printf("O numero não está no vetor");
	}
}
