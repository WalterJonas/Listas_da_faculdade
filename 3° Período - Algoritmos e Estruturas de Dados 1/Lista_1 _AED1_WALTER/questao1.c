//Faça um programa em C que contenha uma função denominada SOMATORIO que realize o
//seguinte calculo:  S = 1/1 + 2/3 + 3/5 + 4/7+ 5/9 + ... + n/m.
//A função deve receber como parâmetro de entrada um valor inteiro (n) e deve retornar o valor
//resultante da operação.

#include<stdio.h>

float somatorio(int n) //Função para realizar o somatório da expressão até o valor "n".
{
	float i, m = 1, soma = 0;
	for(i=1; i<=n; i++)
	{
		soma=soma+(i/m);
		m=m+2;
	}
	return(soma); //Retorna o somatório da expressão.
}
int main()
{
	int n;
	printf("Digite o valor de N: ");
	scanf("%d", &n);
	printf("Soma: %f", somatorio(n));
}
