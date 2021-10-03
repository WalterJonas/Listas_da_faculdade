//LISTA
//•	Inserção
//• Remoção
//• Visualização

#include<stdio.h>
#include<stdlib.h>

void inicializaLista(int *lista, int tam) //Inicializar lista
{
	int i;
	for(i=0; i<tam; i++)
	{
		lista[i] = -1;
	}
}

int insereLista(int *lista, int tam) //Função para inserir os elementos na lista
{
	int i;
	for(i=0; i<tam; i++)
	{
		printf("Insira Valores: ");
		scanf("%d", &lista[i]); //Insere os elementos na lista
	}
	return 1;
}

int removeLista(int *lista, int valor, int tam) //Função para remover um elemento da lista
{
	int i;
	for(i=0; i<tam; i++) //percorre toda a lista
	{
		if(valor==lista[i]) //se achar o valor, remove
		{
			lista[i] = -1;
			printf("Valor removido\n\n");
			return i;
		}
	}
	printf("ERRO\n");
	return 500;
}

void visualizarLista(int *lista, int tam) //Função para imprimir a lista
{
	int i;
	for(i=0; i<tam; i++)
	{
		printf("%d\t", lista[i]); //Imprime toda lista
	}
	printf("\n");
}

int main()
{
	int i, t=5, *lista, valor, op;
	inicializaLista(lista, t);
	op=-1;
	while(op!=0)
	{
		printf("***LISTA***\n\n0 - Sair\n1 - Inserir\n2 - Remover\n3 - Visualizar\nOpcao: ");
		scanf("%d", &op);
		if(op == 1)
		{
			lista = malloc(sizeof(int)*t); //Faz alocação dinamica
			if(lista)
			{
				insereLista(lista, t);
			}
		}
		else if(op == 2)
		{
			printf("Inserir valor que deseja remover da lista: ");
			scanf("%d", &valor);
			removeLista(lista, valor, t);
		}
		else if(op == 3)
		{
			visualizarLista(lista, t);
		}
	}
}
