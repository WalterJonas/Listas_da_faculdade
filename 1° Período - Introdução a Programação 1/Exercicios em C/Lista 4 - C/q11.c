//Fa�a um programa que pergunte o pre�o de tr�s produtos e informe qual produto voc� deve
//comprar, sabendo que a decis�o � sempre pelo mais barato.

#include<stdio.h>
int main(){
	float a, b, c;
	printf("Qual o pre�o do produto 1 ?: ");
	scanf("%f", &a);
	printf("Qual o pre�o do produto 2 ?: ");
	scanf("%f", &b);
	printf("Qual o pre�o do produto 3 ?: ");
	scanf("%f", &c);
	if(a>b &&  b>c){
		printf("Voc� deve comprar o produto 3");
	}	 
	else if(b>c && c>a){
		printf("Voc� deve comprar o produto 1");
	}
	else if(c>b && b>a){
		printf("Voc� deve comprar o produto 1");
	} 
	else if(b>a && a>c){
		printf("Voc� deve comprar o produto 3");
	} 
	else if(a>c && c>b){
		printf("Voc� deve comprar o produto 2");
	} 
	else if(c>a && a>b){
		printf("Voc� deve comprar o produto 2");
	}   
}
