import os
x = 1
while x != 0:
    print('\n1-Feijao com Arroz\n2-Macarronada\n3-Frango Frito\n4-Tracaja Açado\n5-Digite 0 para sair')
    x = int(input('opcao: '))
    if x == 1:
        print('Feijao com Arroz')
        break
    elif x == 2:
        print('Macarronada')
        break
    elif x == 3:
        print('Frango Frito')
        break
    elif x == 4:
        print('Tracaja Açado')
        break
    elif x == 0:
        break
    else:
        print('opcao invalida')
    os.system('clear') or None
input()
        
