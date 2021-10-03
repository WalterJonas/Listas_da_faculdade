//Escrever um algoritmo que leia o nome e o sexo de 50 pessoas e informe o nome e o sexo de cada
//uma. Opções: (ex.: 1 – Masculino / 2 - Feminino). No final informe total de homens e de mulheres.
#include<stdio.h>
int main(){
	int sexo, homem, mulher, i;
	homem=0;
	mulher=0;
	for(i=0; i<5; i++){
		printf("1 - Masculino\n2 - Feminino\nOpção: ");
		scanf("%d", &sexo);
		if(sexo==1){
	        printf("SEXO: Masculino\n");
	        homem=homem+1;
	    }
	    else if(sexo==2){
	    	printf("SEXO: Feminino\n");
	        mulher=mulher+1;
	    }
	}
printf("\nTotal de homens: %d\nTotal de mulheres: %d", homem, mulher);	
}
