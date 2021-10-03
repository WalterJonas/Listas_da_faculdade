#A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos de indústrias
#que são altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0 (zero) até 0,25. Se o
#índice sobe para 0,3 as indústrias do 1o grupo são intimadas a suspenderem suas atividades. Se o índice crescer
#para 0,4 as industrias do 1o e 2o grupo são intimadas a suspenderem suas atividades. Se o índice atingir 0,5
#todos os grupos devem ser notificados a paralisarem suas atividades. Faça um algoritmo que leia o índice de
#poluição medido e emita a notificação adequada aos diferentes grupos de empresas.

indice=float(input("Indice de poluição: "))

if indice==0.3:
    print("1 GRUPO, SUSPENDA SUAS ATIVIDADES, POR OBSÉQUIO!")
elif indice==0.4:
    print("1 e 2 GRUPO, SUSPENDÃO SUAS ATIVIDADES, POR OBSÉQUIO!")
elif indice>=0.5:
    print("TODOS OS GRUPOS, SUSPENDÃO SUAS ATIVIDADES, POR OBSÉQUIO!")
