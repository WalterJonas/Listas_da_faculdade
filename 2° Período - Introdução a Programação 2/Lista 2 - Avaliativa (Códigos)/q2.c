//Escreva uma função potencia(base, expoente) que, quando chamada, retorne o valor
//correspondente à exponenciação. Por exemplo, potencia(3, 4) deve retornar 81. Assuma que o
//expoente é um inteiro maior ou igual a 1.
#include<stdio.h>
int pot;
int potencia(int x, int y)
{
	pot=pow(x, y);
	return pot;
}
int main()
{
	int x, y;
	printf("Insira a base: ");
	scanf("%d", &x);
	printf("Insira o expoente: ");
	scanf("%d", &y);
	potencia(x, y);
	if(potencia)
	{
		printf("Potencia: %d\n", pot);
	}
}

