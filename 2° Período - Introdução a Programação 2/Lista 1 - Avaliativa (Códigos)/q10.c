//Crie um algoritmo que leia um vetor A[10]. Inverta ent�o os valores de A, trocando
//o primeiro pelo �ltimo, segundo pelo pen�ltimo e assim por diante. Mostre o vetor A ap�s as
//altera��es.
#include<stdio.h>
int main()
{
	int i, j, tam=5, vetorA[tam], aux[tam];
	for (i = 0; i < tam; i++)
	{
		printf("Preencha o vetor A: ");
    	scanf("%d", &vetorA[i]);	
    }
    printf("Vetor A: \n");
    for (i=0, j=tam-1; i<tam, j>=0; i++, j--)
	{
    	aux[j]=vetorA[i];
    }
    printf("\n");
	for(i=0; i<tam; i++)
	{
		vetorA[i]=aux[i];
		printf("%d\n", vetorA[i]);
	}
	system("pause");
}
