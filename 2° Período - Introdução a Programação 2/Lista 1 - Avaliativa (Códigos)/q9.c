//Crie um algoritmo que leia um vetor de 20 posi��es e mostre-o. Em seguida, troque
//o primeiro elemento com o �ltimo, o segundo com o pen�ltimo, o terceiro com o antepen�ltimo, e assim sucessivamente. Mostre o novo vetor depois da troca.
#include<stdio.h>
int main()
{
	int i, j, tam=5, vetorA[tam], aux[tam];
	for (i = 0; i < tam; i++)
	{
		printf("Preencha o vetor A: ");
    	scanf("%d", &vetorA[i]);	
    }
    for (i=0, j=tam-1; i<tam, j>=0; i++, j--)
	{
    	printf("%d\n", vetorA[i]);
    	aux[j]=vetorA[i];
    }
	for(i=0; i<tam; i++)
	{
		vetorA[i]=aux[i];
		printf("%d\n", vetorA[i]);
	}
}
