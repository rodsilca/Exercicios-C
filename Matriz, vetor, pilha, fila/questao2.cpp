#include <stdio.h>
#include <stdlib.h>
/*
Crie uma matriz em C que: 

A soma dos termos a22 e  ??32  

A média dos valores das linhas pares  

A media dos valores das colunas impares 

*/
main(){
	int linha=3;
	int coluna =3;
	int matriz[linha][coluna];
	int media = 0;
	int soma = 0;
	
	//Montando a matriz
	for(int i =0; i<linha; i++){
		for(int j =0; j<coluna;j++){
			printf("digite um numero ");
			scanf("%d",&matriz[i][j]);
		}
	}
	//Imprimindo a matriz
	for(int i =0; i<linha; i++){
		for(int j =0; j<coluna;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	//soma dos termos a22 e a32
	printf("Soma dos termos a22 e a32: %d \n",matriz[1][1] + matriz[2][1]);
	printf("\n");
	
	//media dos valores das linhas pares
	for(int i =1; i<linha; i+=2){
		for(int j =0; j<coluna;j++){ 
			printf("%d ", matriz[i][j]);
			soma += matriz[i][j];
		}
		printf("\n");
	}
	media = soma/3;
	printf("Media dos valores das linhas pares: %d \n", media);
	printf("\n");
	
	//a media dos valores das colunas impares
	media=0;
	soma=0;
	for(int i =0; i<linha; i++){
		for(int j =0; j<coluna;j+=2){
			soma += matriz[i][j]; 
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	media = soma/6;
	printf("Media dos valores das colunas impares: %d \n", media);
}
