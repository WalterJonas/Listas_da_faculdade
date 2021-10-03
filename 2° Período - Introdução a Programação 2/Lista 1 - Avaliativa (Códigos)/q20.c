//Crie um algoritmo que preencha uma matriz M(15,5) e mostre-a. 
//Verifique, a seguir, quais os elementos de M que estão repetidos e quantas vezes cada um está repetido. 
//Escrever cada elemento repetido com uma mesagem dizendo que o elemento aparece X vezes em M.
#include<stdio.h>
int main()
{
	int i, j, l=5, c=2, m[l][c], cont=0, k, y;
	for(i=0; i<l; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Posicao[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);         
        }
    }
    for(k=0; k<l; k++)
    {
        for(y=0; y<c; y++)
        {
        	for(i=0; i<l; i++)
    		{
		        for(j=0; j<c; j++)
		        {	
					if(m[i][j]==m[k][y])
					{
						cont++;
					}  
				}
			}
			printf("O numero %d apareceu %d vezes\n", m[k][y], cont);
        	cont=0;
        }
    }
}
