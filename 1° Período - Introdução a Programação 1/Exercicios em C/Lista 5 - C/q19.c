//Fa�a um algoritmo que receba o voto de 1000 eleitores. Nesta elei��o s�o apenas tr�s candidatos:
//10 � Jos� da feira / 20 � Maria Fuma�a / 30 � Chico. No final, imprima o total de votos de cada candidato e a
//quantidade de votos nulos/brancos.
#include<stdio.h>
int main()
{
	int jose, maria, chico, nulo, voto, i;
	jose=0;
	maria=0;
	chico=0;
	nulo=0;
	i=1;
	while(i<5)
	{
		printf("10 - Jos� da Freire\n20 - Maria Fuma�a\n30 - Chico\nVOTO: ");
		scanf("%d", &voto);
	    if(voto==10)
	    {
	    	jose=jose+1;
	    }
	    else if(voto==20)
	    {
	    	maria=maria+1;
	    }  
	    else if(voto==30)
	    {
	    	chico=chico+1;
	    }   
	    else
	    {
	    	nulo=nulo+1;
	    }
		i=i+1;       
	}
	printf("Jos�: %d\nMaria: %d\nChico: %d\nNulo: %d", jose, maria, chico, nulo);
}
