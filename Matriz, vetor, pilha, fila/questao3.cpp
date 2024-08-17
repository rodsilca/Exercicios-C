#include <stdio.h>
#include <stdlib.h>

//crie uma tabela soma de cada matéria  

//crie uma tabela média para cada matéria 

//crie uma tabela soma de cada bimestre 

//crie uma tabela média de cada bimestre 


	float matriz[4][4] = {
        {5.9, 6.2, 4.5, 5.5},
        {6.6, 7.1, 6.5, 8.4},
        {8.6, 6.8, 7.8, 9.0},
        {6.2, 5.6, 5.9, 7.7}
    };
	float somaMat = 0;
	float somaPort = 0;
	float somaGeo = 0;
	float somaHis = 0;
	
	float somaB1 = 0;
	float somaB2 = 0;
	float somaB3 = 0;
	float somaB4 = 0;
	
void somaMateria(){
	for(int i =0; i<4; i++){
		for(int j =0; j<4;j++){
			if(i==0){
				somaMat += matriz[i][j];
			}else if(i==1){
				somaPort += matriz[i][j];
			}else if(i==2){
				somaGeo += matriz[i][j];
			}else{
				somaHis += matriz[i][j];
			}
		}
	}
}
void somaBimestre(){
	for(int j =0; j<4; j++){
		for(int i =0; i<4;i++){
			if(j==0){
				somaB1 += matriz[i][j];
			}else if(j==1){
				somaB2 += matriz[i][j];
			}else if(j==2){
				somaB3 += matriz[i][j];
			}else{
				somaB4 += matriz[i][j];
			}
		}
	}
}
main(){
	
	
	somaMateria();
	somaBimestre();
	
	printf("Soma de cada materia:\n");
	printf("MAtematica: %.2f \n",somaMat);
	printf("Portugues: %.2f \n",somaPort);
	printf("Geografia: %.2f \n",somaGeo);
	printf("Historia: %.2f \n",somaHis);
	printf("\n");
	printf("MEDIA de cada materia: \n");
	printf("\n");
	printf("MAtematica: %.2f \n",somaMat/4);
	printf("Portugues: %.2f \n",somaPort/4);
	printf("Geografia: %.2f \n",somaGeo/4);
	printf("Historia: %.2f \n",somaHis/4);
	
	printf("\n");
	
	printf("Soma de cada bimestre:\n");
	printf("\n");
	printf("BIMESTRE 1: %.2f \n",somaB1);
	printf("BIMESTRE 2: %.2f \n",somaB2);
	printf("BIMESTRE 3: %.2f \n",somaB3);
	printf("BIMESTRE 4: %.2f \n",somaB4);
	printf("\n");
	printf("MEDIA de cada Bimestre:\n");
	printf("\n");
	printf("BIMESTRE 1: %.2f \n",somaB1/4);
	printf("BIMESTRE 2: %.2f \n",somaB2/4);
	printf("BIMESTRE 3: %.2f \n",somaB3/4);
	printf("BIMESTRE 4: %.2f \n",somaB4/4);

}
