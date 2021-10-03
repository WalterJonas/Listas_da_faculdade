//Fa�a um programa em C que leia tr�s valores inteiros (nas vari�veis A, B e C) e chame uma
//fun��o que receba estes 3 valores de entrada e ordene os valores, ou seja, o menor valor na primeira
//variavel (A), o segundo menor valor na variavel do meio (B) e o maior valor na �ltima vari�vel (C).
//Utilize passagem por refer�ncia para alterar os valores das vari�veis (A, B e C).

#include <stdio.h>

void ordena(int *a, int *b, int *c)	//Fun��o que recebe os 3 valores como referencia, e ordena
{
	//Altera��o das variaveis A, B e C
	if(*a>*b && *b>*c){
		int aux;
		aux=*a;
		*a=*c;
		*c=aux;	
	}
	else if (*b>*c && *c>*a){
		int aux;
		aux=*b;
		*b=*c;
		*c=aux;
	}
	else if (*b>*a && *a>*c){
		int aux1, aux2;
		aux1=*c;
		aux2=*a;
		*c=*b;
		*a=aux1;
		*b=aux2;
	}
	else if (*a>*c && *c>*b){
		int aux;
		aux=*b;
		*b=*c;
		*c=*a;
		*a=aux;
	}	
	else if (*c>*a && *a>*b){
		int aux;
		aux=*b;
		*b=*a;
		*a=aux;
	}		
}

int main()
{
	int a, b, c;
	printf("Digite o valor A: ");
	scanf("%d", &a);
	printf("Digite o valor B: ");
	scanf("%d", &b);
	printf("Digite o valor C: ");
	scanf("%d", &c);
	ordena(&a, &b, &c); //Passagem por referencia
	printf("%d, %d, %d", a, b, c);
}
