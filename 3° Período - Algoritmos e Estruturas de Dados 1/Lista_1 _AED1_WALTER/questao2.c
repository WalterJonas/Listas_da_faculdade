//Faça um programa que contenha uma função chamada NUMEROS_PRIMOS, essa função deve
//apresentar ao usuário uma lista dos números primos existentes entre 1 e um número inteiro (NUM)
//informado pelo usuário.
//A função não deve ter retorno e deve receber um valor inteiro (NUM) como parâmetro de entrada
//da função.

#include<stdio.h>

void numeros_primos(int num) 
//Função para imprimir os numeros primos de 1 até o valor "num" passado por parametro 
{
	int x, y, cont=0;
    for (x = 1;x <= num; x++)
	{
        for (y = 1; y <= x;y++)
		{	
            if (x % y == 0)
			{
                cont++;
            }
        }
	    if ( cont == 2)
		{
	        printf("%d\n", x);
	    }
	    cont = 0;
    }
}
int main()
{
	int num;
	printf("num: ");
	scanf("%d", &num);
	numeros_primos(num);
}
