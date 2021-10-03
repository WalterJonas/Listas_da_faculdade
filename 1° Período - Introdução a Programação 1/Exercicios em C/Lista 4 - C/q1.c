//Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e imprima a velocidade em
//m/s (metros por segundo).
 
#include<stdio.h>
int main(){
	float kh, ms;
	printf("Insira a velocidade em Km/h: ");
	scanf("%f", &kh);
	ms=kh/3.6;
	printf("Velocidade em m/s: %0.2f\n", ms);
}
