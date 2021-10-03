#Sabendo que somente os municípiios com mais de 20.000 eleitores aptos têm segundo turno nas
#eleições para prefeito caso o primeiro colocado não tenha mais do que 50% dos votos.
#Faça um algoritmo que leia o nome do município, a quantidade de eleitores aptos, o número de votos
#do candidato mais votado e informe se haverá segundo turno ou não na eleição municipal.

nome=str(input("Nome do Municipio: "))
eleitores=int(input("Quantidade de eleitores aptos: "))
votos=int(input("Número de votos do candidato mais votado: "))
if votos>eleitores:
    print("Tem mais votos que eleitores, tá errado!")
elif eleitores>20000 and votos<eleitores*0.50:
    print("Haverá segundo turno")
else:
    print("Não haverá segundo turno")
