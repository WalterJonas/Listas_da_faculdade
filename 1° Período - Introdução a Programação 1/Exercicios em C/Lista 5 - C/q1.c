//Fa�a um algoritmo que imprima todos os n�meros pares compreendidos entre 85 e 907. O
//algoritmo deve tamb�m calcular e mostrar a soma destes valores.

#include<stdio.h>
int main(){
	int i;
	for(i=85; i<=600; i++){
		if(i%2==0){
			printf("%d\n", i);
		}
	}
}
