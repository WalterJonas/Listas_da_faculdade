//Crie um programa em C para simular uma fila em um consultório médico. O
//paciente chega na recepção e informa o número do CPF e a idade. Em seguida, o sistema o
//coloca em uma fila de espera, que é exibida em uma tela para o paciente acompanhar sua vez. embre que pessoas com idade maior ou igual a 60 anos tem prioridade perante as demais. Imagine que só possam ser atendidas 30 pessoas por dia, mas nem todos os dias são cheios de
//pacientes para atendimento. Crie uma struct para representar o paciente. Pesquisa e utilize o
//conceito de fila de prioridade para implementar este programa.
#include <stdio.h>
#include <string.h>
#define Npacientes 30
struct Paciente
{
    char nome[100];
    long long int cpf;
    int idade;
};
typedef struct
{
    char nome[100];
    long long int cpf;
    int idade;
}semPrioridade;
typedef struct
{
    char nome[100];
    long long int cpf;
    int idade;
}comPrioridade;
void mostrarFila(struct Paciente p[Npacientes], int tam)
{
    int i;
    for(i=0; i<tam; i++)
	{
        printf("Nome: %s\n", p[i].nome);
        printf("CPF: %011lld\n", p[i].cpf);
        printf("Idade: %d\n", p[i].idade);
    }
}
void filaEspera(struct Paciente p[Npacientes], int  tam, int tP, int tN)
{
    int i, contP=0, contN=0, j;
    int contpp=0, contn=0;
    comPrioridade pp[tP];
    semPrioridade pn[tN];
    for (i = 0; i < tam; i++)
    {
        if(p[i].idade >= 60){
            contP++;
        }else{
            contN++;
        }
    }
    contpp=0, contn=0;
    for(i=0;i<tam;i++){
        if(p[i].idade >= 60){
            strcpy(pp[contpp].nome, p[i].nome);
            pp[contpp].cpf = p[i].cpf ;
            pp[contpp].idade = p[i].idade;
            contpp++;
        }else{
            strcpy(pn[contn].nome, p[i].nome);
            pn[contn].cpf = p[i].cpf;
            pn[contn].idade = p[i].idade;
            contn++;
        }
    }
    contn=0, contpp=0;
    if(contP > 0 && contP < contN)
	{
        for(i=0;i<(contP*2);i++){
            if(i%2==0){
                strcpy(p[i].nome, pp[contpp].nome);
                p[i].cpf = pp[contpp].cpf;
                p[i].idade = pp[contpp].idade;
                contpp++;
            }else{
                strcpy(p[i].nome, pn[contn].nome);
                p[i].cpf = pn[contn].cpf;
                p[i].idade = pn[contn].idade;
                contn++;
            }
        }
        for(i=contP+1; i<tam;i++){
            strcpy(p[i].nome, pn[contn].nome); 
            p[i].cpf = pn[contn].cpf;
            p[i].idade = pn[contn].idade;
            contn++;
        }     
    }
    else if(contN > 0 && contN < contP)
	{
        for(i=0;i<(contN*2);i++){
            if(i%2==0){
                strcpy(p[i].nome, pp[contpp].nome);
                p[i].cpf = pp[contpp].cpf;
                p[i].idade = pp[contpp].idade;
                contpp++;
            }else{
                strcpy(p[i].nome, pn[contn].nome);
                p[i].cpf = pn[contn].cpf;
                p[i].idade = pn[contn].idade;
                contn++;
            }
        }
        for(i=contN+1; i<tam;i++){
            strcpy(p[i].nome, pp[contpp].nome);
            p[i].cpf = pp[contpp].cpf;
            p[i].idade = pp[contpp].idade;
            contpp++;
        }    
    }
    else if(contN == contP && contN > 0){
       contpp=0, contn=0;
       for(i=0; i<tam; i++){
           if(i%2==0){
               strcpy(p[i].nome, pp[contpp].nome);
               p[i].cpf = pp[contpp].cpf;
               p[i].idade = pp[contpp].idade;
               contpp++;
           }else{
               strcpy(p[i].nome, pn[contn].nome);
               p[i].cpf = pn[contn].cpf;
               p[i].idade = pn[contn].idade;
               contn++;
           }
       }
   }
}
int main()
{
    int i=0, c=1, N=10, cont=0;
    int comPrioridade=0, semPrioridade=0;
    struct Paciente p[N];
    do{
        cont++;
        printf("Nome: ");
        gets(p[i].nome);
        setbuf(stdin, NULL);
        printf("CPF: ");
        scanf("%lld",&p[i].cpf);
        printf("Idade: ");
        scanf("%d", &p[i].idade);
        if(p[i].idade >= 60)
		{
            comPrioridade++;
        }
		else
		{
            semPrioridade++;
        }
        printf("Continuar 1-SIM 2-NAO: ");
        scanf("%d", &c);
        setbuf(stdin, NULL);
        if(c == 1)
		{
            i++;
        } 
    }while(i <Npacientes && c==1);
    printf("\n\n");
    filaEspera(p, cont, comPrioridade, semPrioridade);
    mostrarFila(p,cont);
}
