//Faça um algoritmo que leia a base e a altura e imprima o valor do perimetro, da area e da diagonal.
#include<stdio.h>
int main(){
	float base, altura, perim, area, diagonal;
	printf("Insira a base: ");
	scanf("%f", &base);
	printf("Insira a altura: ");
	scanf("%f", &altura);
	perim=2*(base+altura);
	area=base*altura;
	diagonal=sqrt(base*base+altura*altura);
	printf("Perimetro: %f\n", perim);
	printf("Area: %f\n" , area);
	printf("Diagonal: %f\n", diagonal);		
}
