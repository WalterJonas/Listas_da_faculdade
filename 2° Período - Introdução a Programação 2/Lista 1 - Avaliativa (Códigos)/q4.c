//Crie um algoritmo que preencha dois vetores (A e B) de 50 posições de números. O
//algoritmo deve, então, subtrair o primeiro elemento de A pelo último de B, acumulando o valor, 
//subtrair o segundo elemento de A pelo penúltimo de B, acumulando o valor, e assim por diante. 
//Mostre o resultado da soma final.
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i, j, tam=5, vetorA[tam], vetorB[tam], soma=0;
    for (i = 0; i < tam; i++)
	{
    	scanf("%d", &vetorA[i]);
    }
    for (i = 0; i < tam; i++)
	{
    	scanf("%d", &vetorB[i]);
    }
    
    for (i = 0;i < tam;i++)
	{
        for (j = tam-1; j>=0; j--)
		{
            soma=soma+(vetorA[i]-vetorB[j]);
    	}
    }
    printf("Soma final: %d", soma);
    return 0;
}
