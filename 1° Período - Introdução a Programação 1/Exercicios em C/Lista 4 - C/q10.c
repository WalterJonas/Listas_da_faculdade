//Crie um algoritmo para ler a distância (km) e o tempo de viagem (horas) de um automóvel, e
//informar se a velocidade média foi superior ao limite (110 km/h) ou não.

#include<stdio.h>
int main(){
	float distancia, velocidade_media;
	int tempo;
	printf("Insira a distancia(Km): ");
	scanf("%f", &distancia);
	printf("Insira o tempo da viagem(horas): ");
	scanf("%d", &tempo);
	velocidade_media=distancia/tempo;
	printf("Velocidade média: %f", velocidade_media); 
	if(velocidade_media>110){
		printf("\nA velocidade média foi maior que o limite de 110 Km/h");
	}	
	else{
		 printf("\nA velocidade média não foi maior que o limite de 110 Km/h");	
	}   
}
