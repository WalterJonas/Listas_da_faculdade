x=int(input("N: "))
i=1
soma=0
while i<x:
    if x%i==0:
        soma=soma+i
        print(i)
    i=i+1
print("SOMA: ", soma)
if soma>x:
    print("Número excessivo!")
else:
    print("Número não excessivo!")
    

