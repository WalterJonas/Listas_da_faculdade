//Para um vetor A de 10 elementos inteiros aleat�rios de 1 a 100, crie uma fun��o que
//retorne o n�mero de vezes que cada valor aparece no vetor (n�mero de repeti��es de cada valor).

#include<stdio.h>

void preenche(int vetor[], int t)
{
	int i;
	for(i=0; i<t; i++)
	{
		//printf("N: ");
		//scanf("%d", &vetor[i]);
		vetor[i]=1+rand()%100;	
	}
}
void mostra(int vetor[], int t)
{
	int i, j, cont;
	printf("\n");
	for(i=0; i<t; i++)
	{
		//printf("%d\n", vetor[i]);
		cont=0;
		for(j=0; j<t; j++)
		{
			if(vetor[i]==vetor[j])
				cont++;		
		}
		printf("%d: %d vezes\n", vetor[i], cont);		
	}
}

int main()
{
	int t=5, vetor[t], i;
	preenche(vetor, t);
	mostra(vetor, t);
}
