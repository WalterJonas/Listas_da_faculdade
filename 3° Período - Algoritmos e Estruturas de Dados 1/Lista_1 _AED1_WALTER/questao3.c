//Faça um programa em C que contenha uma função para:
//• Apresentar na tela os n primeiros elementos da sequência de Fibonacci;
//• Somar dos 10 primeiros termos da série de Fibonacci. Apresentar o resultado na tela.
//Obs.: Os termos seguem o seguinte padrão: 1 1 2 3 5 8 13 ....
//Pesquisar como funciona a “série de Fibonacci”.
//O programa deve utilizar recursividade.

#include <stdio.h>

int fibonacci(int i, int n, int ant, int atu) //Função para fazer a sequencia de Fibonacci até o valor N definido. 
//Parametros => i: para manipular a repetição da recursão.
//				n: valor da quantidade de elementos que será exibido.
//				ant: numero antecessor que inialmente é 0.
//				atu: numero atual que inicialmente é 1.
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

void soma10(i, ant, atu, soma) //Função para fazer a soma dos 10 primeiros termos da sequencia de Fibonacci.
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
		printf("\nSoma dos 10 primeiros termos: %d\n", soma+1); //Tá somando com +1 para acrescentar o 1 que é o primeiro termo. 
	}	
}

int main()
{
	int i=2, n, ant=0, atu=1, soma=0;
	printf("Digite o valor de N: ");
	scanf("%d", &n);
	printf("Termo[1]: %d\n", atu); //Imprime o primeiro termo que é 1.
	fibonacci(i, n, ant, atu);
	soma10(i, ant, atu, soma);
	return 0;
}
