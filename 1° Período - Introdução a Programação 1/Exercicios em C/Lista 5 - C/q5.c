//. Escreva um algoritmo que leia um n�mero e diga se este n�mero � perfeito ou n�o. Um n�mero
//perfeito � aquele que � igual � soma de seus divisores, excluindo o pr�prio n�mero. Exemplos:
//1 + 2 + 3 = 6;
//1 + 2 + 4 + 7 = 28.
#include<stdio.h>
int main(){
	int x, i, soma;
	printf("Insira um numero: ");
	scanf("%d", &x);
	i=1;
	soma=0;
	while(i<x){
		if(x%i==0){
			soma=soma+i;
	        printf("%d\n", i);
		}
		i=i+1;       
	}
	printf("\nSoma dos divisores: %d", soma);
	if(soma==x){
		printf("\nPERFEITO");
	}
	else{
		printf("\nN�O � PERFEITO");	
	}	    
}
