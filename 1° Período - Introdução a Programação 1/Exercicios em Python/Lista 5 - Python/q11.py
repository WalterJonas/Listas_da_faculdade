#Apresentar os resultados de uma tabuada (multiplicação) de um número qualquer. Esta deverá ser
#impressa no seguinte formato: Considerando como exemplo o fornecimento do número 2 :
#2 X 1 = 2
#2 X 2 = 4
#2 X 3 = 6
#2 X 4 = 8
#2 X 5 = 10
#(...)
#2 X 10 = 20

x=int(input("N: "))
for i in range(1, 11):
    mult=x*i
    print(x, " x ", i, " = ", mult)
