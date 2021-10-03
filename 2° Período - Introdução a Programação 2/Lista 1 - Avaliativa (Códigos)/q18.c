//Neste problema voc� deve preencher uma matriz M[12][12] com valores inteiros
//(pode utilizar a fun��o rand() ou ler cada valor), depois ler um n�mero que indica uma coluna da
//matriz na qual uma opera��o deve ser realizada e um caractere mai�sculo (S � Soma; M - Media),
//indicando a opera��o que ser� realizada. Em seguida, calcule e mostre a soma ou a m�dia dos
//elementos da coluna que voc� escolher na matriz. A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, demonstrando os
//elementos que dever�o ser considerados na opera��o. Crie um algoritmo em C para resolver o problema acima
#include<stdio.h>
int main()
{
	int i, j, l=3, c=3, matriz[l][c], x, op, soma=0;
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
	printf("Insira um numero: ");
	scanf("%d", &x);
	printf("Insira uma operacao, S ou M: ");
	scanf("%s", &op);
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
		{
			if(j==x)
			{
				soma=soma+matriz[i][j];
				media=soma/3;
			}
		}
	}
	if(op=='S')
	{
		printf("Soma: %d", soma);
	}
	else if(op=='M')
	{			
		printf("Media: %f", media);
	}
}
