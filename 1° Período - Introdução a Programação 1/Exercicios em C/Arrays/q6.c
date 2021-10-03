//Tentando descobrir se um dado era viciado, o dono do cassino Honesto (ha! ha! ha! ha!) o
//lançou n vezes a fim de verificar tal informação. Faça uma simulação do jogo de dado, lançando-o N
//vezes (considere em torno de 5000). Calcule e mostre o número de ocorrência de cada lado.

#include<stdio.h>

void p(int vetor[], int t)
{
	int i;
	for(i=0; i<t; i++)
	{
		vetor[i]=1+rand()%6;
	}
	for(i=0; i<t; i++)
	{
		printf("%d\n", vetor[i]);
	}
}
void mostra(int vetor[], int t)
{
	int i, j, cont;
	for(i=0; i<t; i++)
	{
		printf("\n");
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
	int t=5, vetor[t], x; 
	p(vetor, t);
	mostra(vetor, t);
}
