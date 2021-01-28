#include<stdio.h>
#define L 5
#define C 4
int main()
{
	float M[L][C];
	int linha, coluna;
	for(linha=0; linha<L; linha++)
	{
		for(coluna=0; coluna<C; coluna++)
		{
			if(coluna==0)
			{
				printf("Matricula: ");
				scanf("%f", &M[linha][0]);
			}
			else if(coluna==1)
			{
				printf("Media Prova: ");
				scanf("%f", &M[linha][1]);
			}
			else if(coluna==2)
			{
				printf("Media Trabalho: ");
				scanf("%f", &M[linha][2]);
			}
			else if(coluna==3)
			{
				M[linha][3]=((M[linha][1]+M[linha][2])/2);
			}
			
		}
	}
	printf("\nMatricula\t Media Prova\t Media Trabalho\t Nota Final\n");
	for(linha=0; linha<L; linha++)
	{
		for(coluna=0; coluna<C; coluna++)
		{
			if(coluna==0)
			{
				printf("%i\t\t", (int)M[linha][coluna]);
			}
			else
			{
				printf("%f\t\t", M[linha][coluna]);
			}
		}
		printf("\n");
	}	
}
