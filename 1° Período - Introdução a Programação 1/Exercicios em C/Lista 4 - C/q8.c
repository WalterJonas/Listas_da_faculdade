//Sabendo que somente os munic�piios com mais de 20.000 eleitores aptos t�m segundo turno nas
//elei��es para prefeito caso o primeiro colocado n�o tenha mais do que 50% dos votos. Fa�a um algoritmo que
//leia o nome do munic�pio, a quantidade de eleitores aptos, o n�mero de votos do candidato mais votado e
//informe se haver� segundo turno ou n�o na elei��o municipal.

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
		printf("Haver� segundo turno!");
	}
	else{
		printf("N�o haver� segundo turno!");
	}
	system("pause");		
}
