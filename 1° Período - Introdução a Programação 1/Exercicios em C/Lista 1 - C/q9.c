//Faça um algoritmo que faça o seguinte calculo: "((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))", leia os valores necessários antes.
#include<stdio.h>
int main(){
		int x2, x1, y2, y1, distancia;
		printf("Insira o valor x2: ");
		scanf("%d", &x2);
		printf("Insira o valor x1: ");
		scanf("%d", &x1);
		printf("Insira o valor y2: ");
		scanf("%d", &y2);
		printf("Insira o valor y1: ");
		scanf("%d", &y1);
		distancia=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		printf("Distância: %d\n", distancia);
}
