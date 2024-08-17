#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Jogo da Velha com Matriz: Crie um tabuleiro de jogo da velha usando uma matriz 3x3 de caracteres (char). 
//O usuário deve informar o número da linha (1 a 3) e o da coluna (1 a 3). A cada entrada, coloque um ‘X’ ou ‘O’ no local selecionado. 

main(){
	int linha = 0;
	int coluna = 0;
	char matriz[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
	

	
		for(int i=1;i<10;i++){
			printf("Linha: \n");
			scanf("%d",&linha);
			printf("Coluna: \n");
			scanf("%d",&coluna);
			
			if(linha<1 || linha >3 || coluna<1||coluna >3){
				printf("Linha ou coluna acima ou abaixo do limite, tente de novo!\n");
				i--;
				continue;
			}
			
			printf("Deixe sua marca (X ou O): ");
			getchar();
			scanf("%c",&matriz[linha-1][coluna-1]);
			
			
		
			for(int i =0; i<3;i++){
				for(int j=0;j<3;j++){
					printf(" %c ", matriz[i][j]);
				}
				printf("\n");
			}	
		}
}
