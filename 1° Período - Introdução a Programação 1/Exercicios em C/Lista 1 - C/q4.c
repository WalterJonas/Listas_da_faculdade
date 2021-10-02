//Faça um algoritmo que receba o raio e a altura e calcule o valor do volume de uma lata.
#include<stdio.h>
int main(){
	float raio, altura, volume, pi=3.14;
	printf("Insira o raio: ");
	scanf("%f", &raio);
	printf("Insira a altura: ");
	scanf("%f", &altura);
	volume=pi*(raio*raio)*altura;
	printf("Volume da lata: %f\n", volume);	 
}
