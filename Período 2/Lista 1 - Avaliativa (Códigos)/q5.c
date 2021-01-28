//Crie um programa que tenha um vetor A preenchido com 100 números. Um vetor B
//deve armazenar todos os números primos presentes no vetor A. Mostre o vetor B.

#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int x, y, tam=100, vetorA[tam], vetorB[tam], cont=0;
    for (x = 0; x < tam; x++)
	{
    	scanf("%d", &vetorA[x]);
    }
    for (x = 0;x < tam;x++)
	{
        for (y = 0; y<=x; y++)
		{
            if (vetorA[x] % vetorA[y] == 0)
			{
                cont++;
        	}
    	}
	    if (cont == 2)
		{
	    	vetorB[x]=vetorA[x];
	    	printf("%d\n", vetorB[x]);
	    }
    	cont = 0;
    }
    return 0;
}
