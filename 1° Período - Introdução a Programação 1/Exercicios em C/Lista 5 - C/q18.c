//Chico tem 1,50 metros e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metros e cresce 3
//cent�metros por ano. Construa um algoritmo que calcule e imprima quantos anos ser�o necess�rios para que Z�
//seja maior que Chico.
#include<stdio.h>
int main()
{
	float chico, ze;
	int ano;
	chico=1.50;
	ze=1.10;
	ano=0;
	while(ze<chico)
	{
		ze=ze+0.03;
	    chico=chico+0.02;
	    ano=ano+1;
	}
	printf("%d anos", ano);  
}
