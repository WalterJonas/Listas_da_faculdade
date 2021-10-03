//Um triângulo é uma figura geométrica de três lados, onde cada um é menor do que a soma dos outros
//dois. Triângulo equilátero possui três lados iguais. Triângulo isóscele possui dois lados iguais. Triângulo escaleno
//possui todos os lados diferentes. Dados três valores A, B e C, verificar se eles podem ser os comprimentos de um
//triângulo equilátero, isóscele ou escaleno. Informar quando não compuserem nenhum triângulo.

#include<stdio.h>
int main(){
	float a, b, c;
	printf("Insira o valor do lado A: ");
	scanf("%d", &a);
	printf("Insira o valor do lado B: ");
	scanf("%d", &b);
	printf("Insira o valor do lado C: ");
	scanf("%d", &c);
	if(a>b+c || b>a+c || c>b+a)
     	printf("Esses valores não formam nenhum triângulo");
	else if(a==b && b==c)
	    printf("Triângulo equilátero");
	else if(a==b && b!=c || a==c && c!=b || b==c && c!=a)
	    printf("Triângulo isósceles");
	else if(a!=b && b!=c)
	    printf("Triângulo escaleno");
	}
