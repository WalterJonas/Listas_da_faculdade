//Fa�a um algoritmo que leia um conjunto de n�meros (X) e imprima a quantidade de n�meros pares
//(QPares) e a quantidade de n�meros impares (QImpares) lidos. Admita que o valor -1 � utilizado como sentinela
//para fim de leitura. Ex.: 1,2,3,4,5 => Pares=2 �mpares=3
#include<stdio.h>
int main()
{
	int i, par, impar, x;
	i=0;
	par=0;
	impar=0;
	while(i<50)
	{
		printf("Insira um numero: ");
		scanf("%d", &x);
	    if(x==-1)
	    {
	    	break;
	    }  
	    if(x%2==0)
	    {
	    	par=par+1;
	    }
	    else
	    {
	    	impar=impar+1;
	    }
	i=i+1;      
	}
printf("Pares: %d\nImpares: %d\n", par, impar);	    
}
