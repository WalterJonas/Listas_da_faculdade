//Crie uma fun��o para preencher aleatoriamente um vetor. Na fun��o main, leia um n�mero
//do usu�rio. Em seguida, cria uma fun��o que verifique se o n�mero lido est� no vetor e retorne a
//posi��o caso esteja. No final, deve-se mostrar a posi��o do valor se o mesmo estiver presente no
//vetor ou uma mensagem informado que o valor n�o est� presente no vetor

#include<stdio.h>

void p(int vetor[], int t)
{
	int i;
	for(i=0; i<t; i++)
	{
		vetor[i]=1+rand()%10;
	}
	for(i=0; i<t; i++)
	{
		printf("%d\n", vetor[i]);
	}
}
int busca(int vetor[], int t, int x)
{
	int i=0;
	while(i<t)
	{
		if(x==vetor[i])
			return i;
		i++;
	}
	return -1;
}
int main()
{
	int t=5, vetor[t], x;
	p(vetor, t);
	printf("Buscar: ");
	scanf("%d", &x);
	if(busca(vetor, t, x)==-1)
		printf("Valor nao encontrado!");
	else
		printf("Encontrado na posicao %d", busca(vetor, t, x));
}
