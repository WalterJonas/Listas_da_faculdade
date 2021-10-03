//Um tri�ngulo � uma figura geom�trica de tr�s lados, onde cada um � menor do que a soma dos outros
//dois. Tri�ngulo equil�tero possui tr�s lados iguais. Tri�ngulo is�scele possui dois lados iguais. Tri�ngulo escaleno
//possui todos os lados diferentes. Dados tr�s valores A, B e C, verificar se eles podem ser os comprimentos de um
//tri�ngulo equil�tero, is�scele ou escaleno. Informar quando n�o compuserem nenhum tri�ngulo.

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
     	printf("Esses valores n�o formam nenhum tri�ngulo");
	else if(a==b && b==c)
	    printf("Tri�ngulo equil�tero");
	else if(a==b && b!=c || a==c && c!=b || b==c && c!=a)
	    printf("Tri�ngulo is�sceles");
	else if(a!=b && b!=c)
	    printf("Tri�ngulo escaleno");
	}
