//Construa um algoritmo que, para a progressão geométrica 3; 9; 27; 81; ...; 6561, determine a
//soma de seus termos. Construa o algoritmo de maneira a não utilizar a fórmula de soma dos termos. Faça com
//que o computador gere cada um dos termos a ser somado. Ex.: 3; 9; 27; 81; 243; 729; 2187; 6561 => 9840
#include<stdio.h>
int main()
{
	int i, q, soma;
	i=3;
	q=3;
	soma=0;
	while(i<=6561)
	{
		soma=soma+i;
	    printf("%d\n", i);
	    i=i*q;
	}
	printf("Soma: %d", soma);    
}
