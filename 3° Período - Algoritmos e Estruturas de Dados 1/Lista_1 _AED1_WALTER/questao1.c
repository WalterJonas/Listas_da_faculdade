//Fa�a um programa em C que contenha uma fun��o denominada SOMATORIO que realize o
//seguinte calculo:  S = 1/1 + 2/3 + 3/5 + 4/7+ 5/9 + ... + n/m.
//A fun��o deve receber como par�metro de entrada um valor inteiro (n) e deve retornar o valor
//resultante da opera��o.

#include<stdio.h>

float somatorio(int n) //Fun��o para realizar o somat�rio da express�o at� o valor "n".
{
	float i, m = 1, soma = 0;
	for(i=1; i<=n; i++)
	{
		soma=soma+(i/m);
		m=m+2;
	}
	return(soma); //Retorna o somat�rio da express�o.
}
int main()
{
	int n;
	printf("Digite o valor de N: ");
	scanf("%d", &n);
	printf("Soma: %f", somatorio(n));
}
