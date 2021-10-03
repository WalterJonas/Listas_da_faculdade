//Faça um programa que pergunte o preço de três produtos e informe qual produto você deve
//comprar, sabendo que a decisão é sempre pelo mais barato.

#include<stdio.h>
int main(){
	float a, b, c;
	printf("Qual o preço do produto 1 ?: ");
	scanf("%f", &a);
	printf("Qual o preço do produto 2 ?: ");
	scanf("%f", &b);
	printf("Qual o preço do produto 3 ?: ");
	scanf("%f", &c);
	if(a>b &&  b>c){
		printf("Você deve comprar o produto 3");
	}	 
	else if(b>c && c>a){
		printf("Você deve comprar o produto 1");
	}
	else if(c>b && b>a){
		printf("Você deve comprar o produto 1");
	} 
	else if(b>a && a>c){
		printf("Você deve comprar o produto 3");
	} 
	else if(a>c && c>b){
		printf("Você deve comprar o produto 2");
	} 
	else if(c>a && a>b){
		printf("Você deve comprar o produto 2");
	}   
}
