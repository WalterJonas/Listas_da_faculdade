//Fa�a um programa que contenha uma fun��o chamada NUMEROS_PRIMOS, essa fun��o deve
//apresentar ao usu�rio uma lista dos n�meros primos existentes entre 1 e um n�mero inteiro (NUM)
//informado pelo usu�rio.
//A fun��o n�o deve ter retorno e deve receber um valor inteiro (NUM) como par�metro de entrada
//da fun��o.

#include<stdio.h>

void numeros_primos(int num) 
//Fun��o para imprimir os numeros primos de 1 at� o valor "num" passado por parametro 
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
