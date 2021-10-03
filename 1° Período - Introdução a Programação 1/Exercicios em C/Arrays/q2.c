//Dados dois vetores A e B com N elementos inteiros cada, crie um terceiro vetor X que
//contenha os elementos comuns a A e B. Imprimir este vetor. Utilize funções para realizar cada
//operação. 

#include<stdio.h>

void preencheA(int vetorA[], int t)
{
	int i;
	for(i=0; i<t; i++)
	{
		printf("Preencha A: ");
		scanf("%d", &vetorA[i]);	
	}
}
void preencheB(int vetorB[], int t)
{
	int j;
	printf("\n");
	for(j=0; j<t; j++)
	{
		printf("Preencha B: ");
		scanf("%d", &vetorB[j]);	
	}
}
void comum(int vetorA[], int vetorB[], int t)
{
	int i, j;
	printf("\n");
	printf("Elementos em comum: \n");
	for(i=0; i<t; i++)
	{
		for(j=0; j<t; j++)
		{
			if(vetorA[i]==vetorB[j])
			{
				printf("%d\n", vetorA[i]);
			}
		}
    }	
}
int main()
{
	int t=5, vetorA[t], vetorB[t];
	preencheA(vetorA, t);
	preencheB(vetorB, t);
	comum(vetorA, vetorB, t);
}
