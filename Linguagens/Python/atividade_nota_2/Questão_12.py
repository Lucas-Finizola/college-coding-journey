#Programa que verifica se um número é múltiplo de 3 ou de 5

num1 = int(input("Digite um número: "))

for i in range(1, num1 +1):
    if num1%3==0 and num1%5==0:
        print(f"O numero {num1} é multiplo de 3 e de 5")
        break
    elif num1%5==0:
        print(f"O numero {num1} é multiplo de 5")
        break
    elif num1%3==0:
        print(f"O numero {num1} é multiplo de 3")
        break
    else:
        print(f"O numero {num1} não é multiplo")