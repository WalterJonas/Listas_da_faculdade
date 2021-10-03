//. Faça um algoritmo que leia um número inteiro e calcule o seu fatorial. Se o número for negativo,
//informe que o valor é inválido.
#include<stdio.h>
int main(){
	int x, n_fat, i;
	i=1;
	n_fat=1;
	printf("Insira um numero: ");
	scanf("%d", &x);
	if(x<0){
		printf("Número inválido!");
	}
	else{
		while(i<=x){
			n_fat=n_fat*i;
	        i=i+1;
		}
		printf("Fatorial: %d", n_fat);	     
	}  
}
