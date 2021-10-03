horaAula=int(input("HoraAula: "))
numeroAula=int(input("AulasDadas: "))
porc_desc=float(input("Insira o porcentual de desconto: "))
salario_bruto=horaAula*numeroAula
inss=salario_bruto-(salario_bruto*porc_desc)/100
salario_liquido=salario_bruto-inss

print("Salario bruto: R$", salario_bruto)
print("Valor do desconto: R$", inss)
print("Salario liquido: R$", salario_liquido)
