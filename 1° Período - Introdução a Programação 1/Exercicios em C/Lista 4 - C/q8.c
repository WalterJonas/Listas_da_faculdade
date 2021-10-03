//Sabendo que somente os municípiios com mais de 20.000 eleitores aptos têm segundo turno nas
//eleições para prefeito caso o primeiro colocado não tenha mais do que 50% dos votos. Faça um algoritmo que
//leia o nome do município, a quantidade de eleitores aptos, o número de votos do candidato mais votado e
//informe se haverá segundo turno ou não na eleição municipal.

#include<stdio.h>
int main(){
	int eleitores, votos;
	printf("Quantidade de eleitores: ");
	scanf("%d", &eleitores);
	printf("Quatidade de votos do candidato mais votado: ");
	scanf("%d", &votos);
	if(votos>eleitores){
		printf("Tem mais votos que eleitores, ta errado!");
	}
	else if(eleitores>20000 && votos<eleitores*0.50){
		printf("Haverá segundo turno!");
	}
	else{
		printf("Não haverá segundo turno!");
	}
	system("pause");		
}
