#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Progressão Geométrica (P.G.) com vetores: Peça um número inicial e uma razão ao usuário. 
//Calcule os termos de uma P.G., armazenando esses valores em um vetor de tamanho 10. 


main(){
	int vetor[10];
	int razao = 0;
	
	printf("Numero inicial: \n");
	scanf("%d",&vetor[0]);
	printf("Razao da progressao: \n");
	scanf("%d",&razao);
	
	
	for(int i=1; i<10;i++){
		int termo = (i+1)-1;
		vetor[i] =  vetor[0] * pow(razao, termo);
	}
	
	for(int i=0; i<10;i++){
		printf("%d ", vetor[i] );
	}
}
