//Fa�a um algoritmo que imprima o consumo m�dio de um autom�vel.
#include<stdio.h>
int main(){
	float d, c, consumo;
	printf("Distancia: ");
	scanf("%f", &d);
	printf("Combustivel: ");
	scanf("%f", &c);
	consumo=d/c;
	printf("O consumo m�dio do autom�vel �: %f Km/l\n", consumo);
	system("pause"); 
}
