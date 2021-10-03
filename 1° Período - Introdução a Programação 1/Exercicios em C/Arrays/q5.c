//Crie uma função para preencher aleatoriamente um vetor. Na função main, leia um número
//do usuário. Em seguida, cria uma função que verifique se o número lido está no vetor e retorne a
//posição caso esteja. No final, deve-se mostrar a posição do valor se o mesmo estiver presente no
//vetor ou uma mensagem informado que o valor não está presente no vetor

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
