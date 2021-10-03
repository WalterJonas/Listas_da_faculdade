//PILHA
//•	Inserção
//• Remoção
//• Visualização

#include<stdio.h>
#include<stdlib.h>

int pilhaVazia(int topo)
{
	if(topo == 0) // pilha está vazia
	{
		return 1;
	}	
	else			//pilha não está vazia
	{
		return 0;
	}
}

int inserePilha(int *pilha, int valor, int topo, int tam) //Insere valor no topo da pilha
{
	if(topo>tam || topo<0) 
	{
		printf("ERRO");
		return 500;
	}	
	pilha[topo] = valor; 		//Inserção no topo da pilha
	topo++;					//Atualiza o topo
	return topo;
}

int removePilha(int *pilha, int topo, int tam) //Remove valor do topo
{
	int aux;
	if(topo<0)
	{
		printf("ERRO");
		return 500;
	}
	aux = pilha[topo-1];
	pilha[topo-1] = -1; 			//Remove valor do topo
	return aux;
}

void visualizaPilha(int *pilha, int *pilha2, int tam, int topo, int topo2)
{
	int aux;
	while(!(pilhaVazia(topo)))			//Enquanto a fila não estiver vazia		
	{
		aux = removePilha(pilha, topo, tam);	//Remove o elemento do topo
		topo = topo - 1;						//Ajusta a posição do elemento do topo
		printf("%d\t", aux);					//Imprime o elemento
		topo2 = inserePilha(pilha2, aux, topo2, tam);	//Insere o elemento removido na pilha auxiliar
	}
	printf("\n");
	while(!(pilhaVazia(topo2)))	//Devolução dos elementos para a pilha original			
	{	
		aux = removePilha(pilha2, topo2, tam);		
		topo2 = topo2 - 1;							
		//printf("%d\t", aux);						
		topo = inserePilha(pilha, aux, topo, tam);	
	}
	printf("\n");
}

int main()
{
	int t=5, topo=0, topo2=0, aux, *pilha, pilha2[t], valor, op;
	op=-1;
	while(op!=0)
	{
		printf("***PILHA***\n\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Visualizar\nOpcao: ");
		scanf("%d", &op);

		if(op == 1)
		{
			pilha = malloc(sizeof(int)*t); //Faz alocação dinamica
			if(pilha)
			{
				int i;
				for(i=0; i<t; i++)
				{
					printf("Insira Valores: ");
					scanf("%d", &pilha[topo]);
					topo++;	
				}
			}
		}
		else if(op == 2)
		{
			aux = removePilha(pilha, topo, t);
			if(aux)
			{
				printf("Valor removido\n\n");
				topo = topo - 1;
			}
			
		}
		else if(op == 3)
		{
			visualizaPilha(pilha, pilha2, t, topo, topo2);
		}
	}
}
