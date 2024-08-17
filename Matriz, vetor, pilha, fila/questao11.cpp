#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

//Verifica��o de Pal�ndromo:�
//Crie um programa que verifica se um n�mero de 4 d�gitos � um pal�ndromo (ou seja, lido de tr�s para frente � igual ao lido da frente para tr�s). 
//Extraia os d�gitos e compare-os (primeiro com o �ltimo, segundo com o pen�ltimo e assim por diante 

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char numero[5];
	bool palin = true;
	int i=0;
	int j=0;
	
	printf("Digite um numero de 4 digitos\n");
	scanf("%s",&numero);
	
	for( i=0, j= strlen(numero)-1; i < j ; i++, j--){
		if(numero[i] != numero[j]){
			palin = false;
			break;
		}
	}
	
	if(palin){
		printf("O n�mero � um palindromo");
	}else{
		printf("O n�mero n�o � um palindromo");
	}
}
