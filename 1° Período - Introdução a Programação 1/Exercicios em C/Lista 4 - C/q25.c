//A Secretaria de Meio Ambiente que controla o �ndice de polui��o mant�m 3 grupos de ind�strias
//que s�o altamente poluentes do meio ambiente. O �ndice de polui��o aceit�vel varia de 0 (zero) at� 0,25. Se o
//�ndice sobe para 0,3 as ind�strias do 1o grupo s�o intimadas a suspenderem suas atividades. Se o �ndice crescer
//para 0,4 as industrias do 1o e 2o grupo s�o intimadas a suspenderem suas atividades. Se o �ndice atingir 0,5
//todos os grupos devem ser notificados a paralisarem suas atividades. Fa�a um algoritmo que leia o �ndice de
//polui��o medido e emita a notifica��o adequada aos diferentes grupos de empresas.

#include<stdio.h>
int main(){
	float indice;
	printf("Indice: ");
	scanf("%f", &indice);
	
	if(indice==0.3){
	    printf("1 GRUPO, SUSPENDA SUAS ATIVIDADES, POR OBS�QUIO!");
		}
	else if(indice==0.4){
		printf("1 e 2 GRUPO, SUSPEND�O SUAS ATIVIDADES, POR OBS�QUIO!");
	}
	else if(indice>=0.5){
		 printf("TODOS OS GRUPOS, SUSPEND�O SUAS ATIVIDADES, POR OBS�QUIO!");
	}   
}
