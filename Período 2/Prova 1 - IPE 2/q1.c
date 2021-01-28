#include<stdio.h>
#define MAX 5
int main()
{
	int vetor[MAX]={3, 3, 3, 3, 3, 5, 5, 5, 5, 5};
	int ind, cont, valor[MAX];
	float aux, moda;
	
	for(cont=0; cont<MAX; cont++)
	{
		for(ind=cont+1; ind<MAX; ind++)
		{
			if(vetor[cont]==vetor[ind])
			{
				valor[cont]++;
				if(valor[cont]>aux)
				{
					aux=valor[cont];
					moda=vetor[cont];
				}
			}
			valor[cont]=0;
		}
	}
	if(valor==0)
	{
		printf("Nao existe moda!");
	}
	else
	{
		printf("Moda: %.2f", moda);
	}
}
