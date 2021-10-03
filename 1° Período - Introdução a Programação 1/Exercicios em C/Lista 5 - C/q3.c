//Da mesma forma que a multiplicação pode ser expressa como o resultado de várias adições, a
//potência pode ser representada por uma série de multiplicações. Faça um algoritmo que calcule a potência de
//um número informado pelo usuário utilizando o operador “*”.
#include<stdio.h>
int main(){
	int base, expoente, pot, i;
	printf("Base: ");
	scanf("%d", &base);
	printf("Expoente: ");
	scanf("%d", &expoente);
	pot=1;
	for(i=1; i<=expoente; i++){
		pot=base*pot;	
	}
	printf("Potencia: %d", pot);
} 
