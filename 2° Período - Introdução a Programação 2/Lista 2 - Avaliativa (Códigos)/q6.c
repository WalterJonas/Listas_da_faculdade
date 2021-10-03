//Faça um programa que leia um vetor com os dados de 5 carros: marca (mximo 15
//letras), ano e preço. eia um valor p e mostre as informações de todos os carros com preço
//menor que p. Repita este processo até que seja lido um valor p = 0.
#include<stdio.h>
typedef struct carro
{
	char marca[15];
	int ano;
	float preco;
}carro;
int main()
{
	int i, n=2, p;
	carro c[n];
	for(i=0; i<n; i++)
	{
		printf("Marca: ");
		scanf("%s", c[i].marca);
		printf("Ano: ");
		scanf("%d", &c[i].ano);
		printf("Preco: ");
		scanf("%f", &c[i].preco);
	}
	printf("\n");
	do
	{
		printf("Insira o valor P: ");
		scanf("%d", &p);
		for(i=0; i<n; i++)
		{
			if(c[i].preco<p)
			{
				printf("Marca: %s\n", c[i].marca);
				printf("Ano: %d\n", c[i].ano);
				printf("Preco: %f\n", c[i].preco);
			}
		}	
	}
	while(p!=0);
}
