//Faça um algoritmo que leia 4 valores: a, b, c e d respectivamente, e calcule a diferença dos produtos: (a*b)-(c*d).

#include<stdio.h>
int main(){
	int a, b, c, d, dif;
	printf("Insira o valor A: ");
	scanf("%d", &a);
	printf("Insira o valor B: ");
	scanf("%d", &b);
	printf("Insira o valor C: ");
	scanf("%d", &c);
	printf("Insira o valor D: ");
	scanf("%d", &d);
	dif=(a*b)-(c*d);
	printf("Resultado: %d\n",  dif);
	system("pause");	
}
