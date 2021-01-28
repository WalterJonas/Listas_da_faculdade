//Neste problema você deve preencher uma matriz M[12][12] com valores inteiros
//(pode utilizar a função rand() ou ler cada valor), depois ler um número que indica uma coluna da
//matriz na qual uma operação deve ser realizada e um caractere maiúsculo (S – Soma; M - Media),
//indicando a operação que será realizada. Em seguida, calcule e mostre a soma ou a média dos
//elementos da coluna que você escolher na matriz. A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, demonstrando os
//elementos que deverão ser considerados na operação. Crie um algoritmo em C para resolver o problema acima
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
