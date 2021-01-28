//Crie um programa que gere os 20 primeiros números primos armazenando-os em um
//vetor. No final, mostre o resultado.

#include<stdio.h>
int main()
{
	int x, y, cont=0, tam=20, vetor[tam];
    for (x = 1;x <= 71;x++)
	{
        for (y = 1; y <= x;y++)
		{
            if (x % y == 0)
			{
                cont++;
        	}
    	}
    	if (cont == 2)
		{
			vetor[x]=x;
			printf("%d\n", vetor[x]);	
    	}
    	cont = 0;
    } 
}
