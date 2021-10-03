#Um triângulo é uma figura geométrica de três lados, onde cada um é menor do que a soma dos outros
#dois. Triângulo equilátero possui três lados iguais. Triângulo isóscele possui dois lados iguais. Triângulo escaleno
#possui todos os lados diferentes. Dados três valores A, B e C, verificar se eles podem ser os comprimentos de um
#triângulo equilátero, isóscele ou escaleno. Informar quando não compuserem nenhum triângulo.

a=float(input("Insira o valor do lado A: "))
b=float(input("Insira o valor do lado B: "))
c=float(input("Insira o valor do lado C: "))
if a>b+c or b>a+c or c>b+a:
     print("Esses valores não formam nenhum triângulo")
else:
    if a==b==c:
        print("Triângulo equilátero")
    elif a==b!=c or a==c!=b or b==c!=a:
        print("Triângulo isósceles")
    elif a!=b!=c:
        print("Triângulo escaleno")



