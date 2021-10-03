#Crie um algoritmo chamado Zodiaco. Este algoritmo deve ler a data do seu aniversário e atribuir
#um valor para a variável inteira chamada signo, conforme lista abaixo:
#a) 1 o signo do zodíaco: Aquário (21/jan a 19/fev)
#b) 2 o signo do zodíaco: Peixes (20/fev a 20/mar)
#c) 3 o signo do zodíaco: Áries (21/mar a 20/abr)
#d) 4 o signo do zodíaco: Touro (21/abr a 20/mai)
#e) 5 o signo do zodíaco: Gêmeos (21/mai a 20/jun)
#f) 6 o signo do zodíaco: Câncer (21/jun a 21/jul)
#g) 7 o signo do zodíaco: Leão (22/jul a 22/ago)
#h) 8 o signo do zodíaco: Virgem (23/ago a 22/set)
#i) 9 o signo do zodíaco: Libra (23/set a 22/out)
#j) 10 o signo do zodíaco: Escorpião (23/out a 21/nov)
#k) 11 o signo do zodíaco: Sagitário (22/nov a 21/dez)
#l) 12 o signo do zodíaco: Capricórnio (22/dez a 20/jan)

dia=int(input("Dia: "))
mes=int(input("Mês: "))

if dia>=21 and dia<=30 and mes==1 or dia>=1 and dia<=19 and mes==2:
    print("AQUARIO")
    signo=1
    print(signo)
elif dia>=20 and dia<=30 and mes==2 or dia>=1 and dia<=20 and mes==3:
    print("PEIXE")
    signo=2
    print(signo)
elif dia>=21 and dia<=30 and mes==3 or dia>=1 and dia<=20 and mes==4:
    print("ARIES")
    signo=3
    print(signo)
elif dia>=21 and dia<=30 and mes==4 or dia>=1 and dia<=20 and mes==5:
    print("TOURO")
    signo=4
    print(signo)
elif dia>=21 and dia<=30 and mes==5 or dia>=1 and dia<=20 and mes==6:
    print("GEMEOS")
    signo=5
    print(signo)
elif dia>=21 and dia<=30 and mes==6 or dia>=1 and dia<=21 and mes==7:
    print("CANCER")
    signo=6
    print(signo)
elif dia>=22 and dia<=30 and mes==7 or dia>=1 and dia<=22 and mes==8:
    print("LEAO")
    signo=7
    print(signo)
elif dia>=23 and dia<=30 and mes==8 or dia>=1 and dia<=22 and mes==9:
    print("VIRGEM")
    signo=8
    print(signo)
elif dia>=23 and dia<=30 and mes==9 or dia>=1 and dia<=22 and mes==10:
    print("LIBRA")
    signo=9
    print(signo)
elif dia>=23 and dia<=30 and mes==10 or dia>=1 and dia<=21 and mes==11:
    print("ESCORPIAO")
    signo=10
    print(signo)
elif dia>=22 and dia<=30 and mes==11 or dia>=1 and dia<=21 and mes==12:
    print("SARGITARIO")
    signo=11
    print(signo)
elif dia>=22 and dia<=30 and mes==12 or dia>=1 and dia<=20 and mes==1:
    print("CAPRICONIO")
    signo=12
    print(signo)
