//A convers�o de graus Farenheit para Cent�grados � obtida por C = (5-9)*(F-32). Fa�a um
//programa que calcule e escreva uma tabela de cent�grados em fun��o de graus Farenheit, que variam de 50 a
//150 de 1 em 1.
#include<stdio.h>
int main()
{
	int i; 
	float c;
	i=50;
	while(i<=150)
	{
		c=(i-32)/(9/5);
	    printf("Farenheit: %d Celcius: %f\n", i, c);
	    i=i+1;	
	}
}
