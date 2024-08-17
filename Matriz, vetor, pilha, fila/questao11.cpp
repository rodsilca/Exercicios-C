#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

//Verificação de Palíndromo: 
//Crie um programa que verifica se um número de 4 dígitos é um palíndromo (ou seja, lido de trás para frente é igual ao lido da frente para trás). 
//Extraia os dígitos e compare-os (primeiro com o último, segundo com o penúltimo e assim por diante 

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
		printf("O número é um palindromo");
	}else{
		printf("O número não é um palindromo");
	}
}
