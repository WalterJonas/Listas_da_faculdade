//Implementar um programa em C que calcule e escreva a soma dos 10 primeiros termos da s�rie
//de FETUCCINE. A s�rie de FETUCCINE � gerada da seguinte forma: os dois primeiros termos s�o
//definidos pelo usu�rio; a partir da�, os termos s�o gerados com a soma ou subtra��o dos dois termos
//anteriores. Se o n�mero da posi��o do elemento for �mpar, ele faz a soma dos dois anteriores e, se
//for par, faz a subtra��o.
//Exemplo: 1 2 3 1 4 3 7 4 ... .
//Obs.: Forne�a os dois valores iniciais como par�metros de entrada da fun��o.
//O programa deve utilizar recursividade.

#include<stdio.h>

int fetuccine(int i, int x, int y, int soma) //Fun��o para fazer soma dos 10 primeiros termos da serie de fetuccine. 
//Parametros => i: para manipular a recurs�o.
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
	//A fun��o t� somando com x e y para acrescentar a soma dos dois primeiros termos que o usu�rio digitou.	
}
