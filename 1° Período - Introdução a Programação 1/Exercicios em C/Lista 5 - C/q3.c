//Da mesma forma que a multiplica��o pode ser expressa como o resultado de v�rias adi��es, a
//pot�ncia pode ser representada por uma s�rie de multiplica��es. Fa�a um algoritmo que calcule a pot�ncia de
//um n�mero informado pelo usu�rio utilizando o operador �*�.
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
