#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Verifique se um n�mero est� em um vetor:�Gere aleatoriamente 10 n�meros e armazene-os em um vetor. 
//Em seguida, pe�a ao usu�rio para digitar um n�mero e verifique se ele est� presente no vetor. 
//Se estiver, indique a posi��o em que ele se encontra. 

main(){
	setlocale(LC_ALL, "Portuguese");
	int vetor[10] = {9,2,436,7,34,3534,63,364,30,6};
	int verNum = 0; 
	int status =0;
	
	printf("Digite um numero: \n");
	scanf("%d",&verNum);
	
	for(int i=0; i<10;i++){
		if(verNum == vetor[i]){
			printf("O n�mero %d est� na posi��o %d do vetor", verNum, i+1);
			status =1;
			break;
		}
	}
	
	if(status ==0){
		printf("O numero n�o est� no vetor");
	}
}
