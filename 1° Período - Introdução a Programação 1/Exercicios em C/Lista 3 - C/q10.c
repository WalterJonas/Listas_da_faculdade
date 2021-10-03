//A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Faça um
//algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 – 7 anos
//Infantil B 8 – 10 anos
//Juvenil A 11 – 13 anos
//Juvenil B 14 – 17 anos
//Sênior Maiores de 18 anos

#include<stdio.h>
int main(){
	int idade;
	printf("Idade: ");
	scanf("%d", &idade);
	if(idade>=5 && idade<=7)
	    printf("INFANTIL A");
	else if(idade>=8 && idade<=10)
	    printf("INFANTIL B");
	else if(idade>=11 && idade<=13)
	    printf("JUVENIL A");
	else if(idade>=14 && idade<=17)
	    printf("JUVENIL B");
	else if(idade>=18)
	    printf("SENIOR");

}
