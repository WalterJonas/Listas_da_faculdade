//Escreva uma função que calcule e retorne a distância entre dois pontos (x1, x2) e (y1, y2). Todos os números e valores de retorno devem ser do tipo float
#include<stdio.h>
float d;
float distancia(float x1, float x2, float y1, float y2)
{
	d=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	return d;
}
int main()
{
	float x1, x2, y1, y2;
	printf("Insira x1: ");
	scanf("%f", &x1);
	printf("Insira x2: ");
	scanf("%f", &x2);
	printf("Insira y1: ");
	scanf("%f", &y1);
	printf("Insira y2: ");
	scanf("%f", &y2);
	distancia(x1, x2, y1, y2);
	if(distancia)
	{
		printf("Distancia: %f\n", d);
	}
}

