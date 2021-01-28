#include<stdio.h>
int main()
{
	int i, j, l=3, c=3, matrizA[l][c], matrizB[l][c], matrizC[l][c];
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Preencha A: ");
			scanf("%d", &matrizA[i][j]);
		}
	}
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Preencha B: ");
			scanf("%d", &matrizB[i][j]);
		}
	}
	for(i=0; i<l; i++)
	{
		for(j=0; j<c; j++)
		{
       	 	if(matrizA[i][j]>matrizB[i][j])
			{
				matrizC[i][j]=matrizA[i][j];
			}
			else if(matrizA[i][j]<matrizB[i][j])
			{
				matrizC[i][j]=matrizB[i][j];
			}
				printf("%d\n", matrizC[i][j]);
		}
	}
}
