//Faça um algoritmo que imprima o consumo médio de um automóvel.
#include<stdio.h>
int main(){
	float d, c, consumo;
	printf("Distancia: ");
	scanf("%f", &d);
	printf("Combustivel: ");
	scanf("%f", &c);
	consumo=d/c;
	printf("O consumo médio do automóvel é: %f Km/l\n", consumo);
	system("pause"); 
}
