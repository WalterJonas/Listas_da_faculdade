//Baseando-se na quest�o anterior, crie e preencha uma matriz M[12][12] e leia um
//caractere mai�sculo, que indica uma opera��o que deve ser realizada. Em seguida, calcule e
//mostre a soma ou a m�dia considerando somente aqueles elementos que est�o acima da
//diagonal principal da matriz, conforme ilustrado abaixo (�rea verde).
#include<stdio.h>
int main()
{
	int i, j, l=3, c=3, matriz[l][c], op, soma=0, cont=0;
	float media;
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Posicao[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("Insira uma operacao, S ou M: ");
	scanf("%s", &op);
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i<j)
			{
				cont++;
				soma=soma+matriz[i][j];
				media=soma/cont;
			}
		}
	}
	if(op=='S')
	{
		printf("Soma: %d", soma);
	}
	else if(op=='M')
	{			
		printf("Media: %0.1f", media);
	}
}
