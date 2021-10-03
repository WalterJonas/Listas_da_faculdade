//Implementar um programa em C que calcule e escreva a soma dos 10 primeiros termos da série
//de FETUCCINE. A série de FETUCCINE é gerada da seguinte forma: os dois primeiros termos são
//definidos pelo usuário; a partir daí, os termos são gerados com a soma ou subtração dos dois termos
//anteriores. Se o número da posição do elemento for ímpar, ele faz a soma dos dois anteriores e, se
//for par, faz a subtração.
//Exemplo: 1 2 3 1 4 3 7 4 ... .
//Obs.: Forneça os dois valores iniciais como parâmetros de entrada da função.
//O programa deve utilizar recursividade.

#include<stdio.h>

int fetuccine(int i, int x, int y, int soma) //Função para fazer soma dos 10 primeiros termos da serie de fetuccine. 
//Parametros => i: para manipular a recursão.
//				x: primeiro termo digitado pelo usuario.
//				y: segundo termo digitado pelo usuario.
//				soma: para guardar a soma dos 10 primeiros termos.
{
	int n;
	if(i<=10)
	{
		if(i%2==0)
		{
			n=y-x;		
		}
		else
		{
			n=y+x;
		}
		printf("Termo[%d]: %d\n", i, n); //Imprime o termo	
		soma=soma+n;
		x=y;
		y=n;
		i++;
		fetuccine(i, x, y, soma); //Recursividade
	}
	else
	{
		return soma; //Retorna a soma
	}
}

int main()
{
	int i=3, x, y, soma=0;
	printf("Termo[1]: ");
	scanf("%d", &x);
	printf("Termo[2]: ");
	scanf("%d", &y);	
	printf("\nSoma dos 10 primeiros termos: %d\n", fetuccine(i, x, y, soma) + x + y); //Exibe a soma dos 10 primeiros termos
	//A função tá somando com x e y para acrescentar a soma dos dois primeiros termos que o usuário digitou.	
}
