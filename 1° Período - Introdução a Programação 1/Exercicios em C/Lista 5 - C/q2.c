//Faça um algoritmo que receba N número inteiros e conte quantos são números pares e quantos são
//ímpares. No final, imprima o resultado.

#include<stdio.h>
int main(){
	int n, i, par, impar;
	impar=0;
	par=0;
	for(i=1; i<=5; i++){
		printf("Insira um numero: ");
		scanf("%d", &n);
		if(n%2==0){
			par=par+1;
		}
		else{
			impar=impar+1;
		}
	}
	printf("Par: %d\nImpar: %d\n", par, impar);
}
