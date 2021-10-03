#Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para
#estar em condições, um dos seguintes requisitos deve ser satisfeito: - Ter no mínimo 65 anos de idade. - Ter trabalhado no mínimo 30 anos. - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. Com base nas informações acima, faça um algoritmo que leia: o número do empregado (código), o ano de seu
#nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo de trabalho do
#empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'.

codigo=int(input("Insira o código do empregado: "))
ano_nasc=int(input("Insira o ano do nascimento do empregado: "))
ano_ingresso=int(input("Insira o ano do ingresso na empresa: "))

idade=2019-ano_nasc
tempo_trabalho=2019-ano_ingresso

if idade>=65 or tempo_trabalho>=30 or idade>=60 and tempo_trabalho>=25:
    print("Idade: ", idade, "anos\nTempo de trabalho: ", tempo_trabalho, "ano(s)")
    print("Requerer aposentadoria")
else:
    print("Idade: ", idade, "anos\nTempo de trabalho: ", tempo_trabalho, "ano(s)")
    print("Não requerer")
