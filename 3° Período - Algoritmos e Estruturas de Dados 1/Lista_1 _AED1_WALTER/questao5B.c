//FILA
//•	Inserção
//• Remoção
//• Visualização

#include<stdio.h>
#include<stdlib.h>

int filaVazia(int prim, int ult)
{
	if(prim == 0 && ult == 0) //verifica se fila está vazia
	{
		return 1;
	}
	else					//Se a fila não está vazia
	{
		return 0;
	}
}

void ajustaFila(int *fila, int tam) //Ajusta fila, removendo os espaços vazios
{
	int i, j, h=0;
	for(i=0; i<tam; i++)
	{
		if(fila[i] == -1)
		{
			h=1;
		}
		else if(fila[i]!=-1 && h==1)
		{
			j=i;
			while(fila[j-1]==-1)
			{
				fila[j-1] = fila[j];
				fila[j]=-1;
				j--;
			}
		}
	}
}

int insereFila(int *fila, int valor, int ult, int tam) //Insere valor na ultima posição
{
	if(ult>tam || ult < 0) //verifica se a posição está valida
	{
		printf("ERRO");
		return 500;
	}
	fila[ult] = valor; 		//Inserção na ultima posição
	ult++;					//Atualiza ultima posição
	return ult;
}

int removeFila(int *fila, int prim, int tam) //Remove valor da primeira posição
{
	int aux;
	if(prim<0)
	{
		printf("ERRO");
		return 500;
	}
	aux = fila[prim];
	fila[prim] = -1; 			//Remove valor da primeira posição
	ajustaFila(fila, tam);		//Ajusta as posições da fila
	return aux;
}

void visualizarFila(int *fila, int *fila2, int tam, int prim, int ult, int prim2, int ult2)
{
	int aux;
	while(!(filaVazia(prim, ult)))					//Enquanto a fila não estiver vazia
	{
		aux = removeFila(fila, prim, tam);			//Remove o primeiro elemento da lista
		ult = ult - 1;								//Ajusta a posição do ultimo elemento
		printf("%d\t", aux);						//Imprime o elemento
		ult2 = insereFila(fila2, aux, ult2, tam);	//Insere o elemento removido na fila auxiliar
	}
	printf("\n");	
	while(!(filaVazia(prim2, ult2))) //Devolução dos elementos para a fila original					
	{	
		aux = removeFila(fila2, prim2, tam);			
		ult2 = ult2 - 1;							
		//printf("%d\t", aux);						
		ult = insereFila(fila, aux, ult, tam);	
	}
	printf("\n");	
}

int main()
{
	int t = 5, ult = 0, prim = 0, ult2 = 0, prim2 = 0, aux, *fila, fila2[t], valor, op;
	op=-1;
	while(op!=0)
	{
		printf("***FILA***\n\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Visualizar\nOpcao: ");
		scanf("%d", &op);

		if(op == 1)
		{
			fila = malloc(sizeof(int)*t); //Faz alocação dinamica
			if(fila)
			{
				int i;
				for(i=0; i<t; i++)
				{
					printf("Insira Valores: ");
					scanf("%d", &fila[ult]);
					ult++;	
				}
			}
		}
		else if(op == 2)
        {
            aux = removeFila(fila, prim, t);
        	if(aux)
        	{
        		printf("Valor removido\n\n");
        		ult = ult - 1;	
        	}
            
        }
		else if(op == 3)
		{
			visualizarFila(fila, fila2, t, prim, ult, prim2, ult2);
		}
	}
}
