#Faça um algoritmo que calcule a média ponderada de um aluno,
#a partir de suas 3 notas obtidas no curso, sabendo-se que a primeira
#avaliação tem peso 2, a segunda tem peso 4 e a terceira tem peso 4.
#No final, mostre a média final do aluno e também verifique se o aluno foi
#aprovado, se está na prova final ou se foi reprovado. Para este caso,
#aplique o sistema de avaliação da UFAM. 

n1=float(input("digite n1; "))
n2=float(input("digite n2: "))
n3=float(input("digite n3: "))
mp=(n1*2+n2*4+n3*4)/10
print("mp " , mp )
if mp>=8:
    print("aprovado")  
elif mp<2.5:
    print("reprovado")
else:
    print("o aluno esta na pf ")
