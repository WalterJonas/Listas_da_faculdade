//Um vetor � pal�ndromo se ele n�o se altera quando as posi��es das componentes
//s�o invertidas. Por exemplo, o vetor v = {1, 3, 5, 2, 2, 5, 3, 1} � pal�ndromo. Crie um algoritmo
//em C que verifique se um vetor � pal�ndromo.
#include<stdio.h>
int main()
{
	int i, j, tam=8, vetorA[tam], aux[tam], cont=0;
	for (i = 0; i < tam; i++)
	{
		printf("Preencha o vetor A: ");
    	scanf("%d", &vetorA[i]);	
    }
    printf("Vetor A: \n");
    for (i=0, j=tam-1; i<tam, j>=0; i++, j--)
	{
    	aux[j]=vetorA[i];
    	printf("%d\n", aux[j]);	
    }
    for(i=0, j=0; i<tam, j<tam; i++, j++)
	{
		if(aux[j]==vetorA[i])
    	{
    		cont++;
    	}
	}
	if(cont==8)
    {
    	printf("Palindromo");
    }
	system("pause");
}
