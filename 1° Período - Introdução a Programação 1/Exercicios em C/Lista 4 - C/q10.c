//Crie um algoritmo para ler a dist�ncia (km) e o tempo de viagem (horas) de um autom�vel, e
//informar se a velocidade m�dia foi superior ao limite (110 km/h) ou n�o.

#include<stdio.h>
int main(){
	float distancia, velocidade_media;
	int tempo;
	printf("Insira a distancia(Km): ");
	scanf("%f", &distancia);
	printf("Insira o tempo da viagem(horas): ");
	scanf("%d", &tempo);
	velocidade_media=distancia/tempo;
	printf("Velocidade m�dia: %f", velocidade_media); 
	if(velocidade_media>110){
		printf("\nA velocidade m�dia foi maior que o limite de 110 Km/h");
	}	
	else{
		 printf("\nA velocidade m�dia n�o foi maior que o limite de 110 Km/h");	
	}   
}
