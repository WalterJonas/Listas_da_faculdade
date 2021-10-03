#ler tres numeros inteiros 
#imprimil-os em ordem crescente
a=int(input("numero a :")) 
b=int(input("numero b :")) 
c=int(input("numero c :")) 
if a>b and a>c and b>c:
    print(c,b,a)
elif b>c and b>a and c>a:
    print(a,c,b) 
elif c>b and c>a and b>a:
    print(a,b,c) 
elif b>a and b>c and a>c:
    print(c,a,b) 
elif a>c and a>b and c>b:
    print(b,c,a)
elif c>a and c>b and a>b:
    print(b,a,c)
input()
