#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numeros[10];
int maiorNum = 0;
int menorNum = 999;
int elementoMaior = 0;
int elementoMenor = 0;

//Encontre o maior e o menor elemento em um vetor:�
//Crie um programa em C que pe�a 10 n�meros, armazene-os em um vetor e determine qual elemento � o maior, qual � o menor e seus valores. 


void entrarNums(){
	for(int i=0; i<10;i++){
		scanf("%d",&numeros[i]);
	}
	
}

void encontrarMaior(){
	for(int i=0; i< 10;i++){
		if(numeros[i] > maiorNum){
				maiorNum = numeros[i];
				elementoMaior = i+1;
		}
	}
	
}
void encontrarMenor(){
	for(int i=0; i< 10;i++){
		if(numeros[i] <  menorNum){
				menorNum = numeros[i];
				elementoMenor = i+1;
		}
	}

}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite 10 n�meros inteiros: \n");
	
	entrarNums();
	encontrarMaior();
	encontrarMenor();
	
	printf("Elemento %d � o menor com o Valor: %d \n", elementoMenor, menorNum);
	printf("Elemento %d � o maior com o Valor: %d ", elementoMaior, maiorNum);
}
