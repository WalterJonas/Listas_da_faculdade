//Fa�a um algoritmo que calcule a quantidade de litros necess�rios para uma certa viagem. 
#include<stdio.h>
int main(){
	int temp_gasto;
	float veloc_media, distancia, litros;
	printf("TEMPO GASTO: ");
	scanf("%d", &temp_gasto);
	printf("VELOCIDADE MEDIA: ");
	scanf("%f", &veloc_media);
	distancia=temp_gasto*veloc_media;
	litros=distancia/12;
	printf("Litros necess�rios: %f\n", litros);
}
