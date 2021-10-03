//. Construa um algoritmo que leia um grupo de 50 valores inteiros, determine:
//a) A soma dos números positivos;
//b) A quantidade de valores negativos;
#include<stdio.h>
int main(){
	int x, i, soma, negativo;
	soma=0;
	negativo=0;
	for(i=1; i<=5; i++){
		printf("Insira um numero: ");
		scanf("%d", &x);
		if(x>0){
			soma=soma+x;
		}
    	if(x<0){
    		negativo=negativo+1;
    	}
	}
	printf("Soma dos positivos: %d\nQuantidade de negativos: %d", soma, negativo);
}


