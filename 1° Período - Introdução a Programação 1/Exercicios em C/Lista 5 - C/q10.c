//Fa�a um algoritmo que calcule a m�dia de sal�rios de uma empresa, pedindo ao usu�rio a
//quantidade de funcion�rios e o sal�rio de cada funcion�rio e devolvendo a m�dia, o sal�rio mais alto e o sal�rio
//mais baixo.
#include<stdio.h>
int main()
{
	int quant, i, soma;
	float salario1, salario, maior, menor, media;
	printf("Quantidade de funcionarios: ");
	scanf("%d", &quant);
	printf("Salario: ");
	scanf("%f", &salario1);
	maior=salario1;
	menor=salario1;
	soma=0;
	i=0;
	while(i<quant-1)
	{
		printf("Salario: ");
		scanf("%f", &salario);
	    if(salario>maior)
	    {
	    	maior=salario;
	    }  
	    if(salario<menor)
	    {
	    	menor=salario;
	    }
	i=i+1;
    soma=soma+salario;    
	}
media=(salario1+soma)/quant;
printf("Maior salario: %f\nMenor salario: %f\nMedia dos salarios: %f\n", maior, menor, media);	
}
