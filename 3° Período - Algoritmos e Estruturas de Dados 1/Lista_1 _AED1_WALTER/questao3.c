//Fa�a um programa em C que contenha uma fun��o para:
//� Apresentar na tela os n primeiros elementos da sequ�ncia de Fibonacci;
//� Somar dos 10 primeiros termos da s�rie de Fibonacci. Apresentar o resultado na tela.
//Obs.: Os termos seguem o seguinte padr�o: 1 1 2 3 5 8 13 ....
//Pesquisar como funciona a �s�rie de Fibonacci�.
//O programa deve utilizar recursividade.

#include <stdio.h>

int fibonacci(int i, int n, int ant, int atu) //Fun��o para fazer a sequencia de Fibonacci at� o valor N definido. 
//Parametros => i: para manipular a repeti��o da recurs�o.
//				n: valor da quantidade de elementos que ser� exibido.
//				ant: numero antecessor que inialmente � 0.
//				atu: numero atual que inicialmente � 1.
{
	int prox;
	if(i<=n)
	{
		prox=ant+atu;
	    printf("Termo[%d]: %d\n", i, prox);
		i++;
		ant=atu;
		atu=prox;
		fibonacci(i, n, ant, atu); 	//Recursividade
	}
	else
	{
		return 0;
	}
}

void soma10(i, ant, atu, soma) //Fun��o para fazer a soma dos 10 primeiros termos da sequencia de Fibonacci.
//Parametros => Soma: para guardar a soma dos 10 primeiros termos.
{
	int prox;
	if(i<=10)
	{
		prox=ant+atu;
		soma=soma+prox;	
		ant=atu;
		atu=prox;
		i++;	
		soma10(i, ant, atu, soma);	//Recursividade
	}
	else
	{
		printf("\nSoma dos 10 primeiros termos: %d\n", soma+1); //T� somando com +1 para acrescentar o 1 que � o primeiro termo. 
	}	
}

int main()
{
	int i=2, n, ant=0, atu=1, soma=0;
	printf("Digite o valor de N: ");
	scanf("%d", &n);
	printf("Termo[1]: %d\n", atu); //Imprime o primeiro termo que � 1.
	fibonacci(i, n, ant, atu);
	soma10(i, ant, atu, soma);
	return 0;
}
