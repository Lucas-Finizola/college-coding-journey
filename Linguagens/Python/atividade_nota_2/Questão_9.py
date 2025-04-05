#Programa que verifica se um número é divisível por outro número

num1 = int(input("Digite um número: "))
num2 = int(input("Digite outro número: "))

if num1%num2==0:
    print(f"O número {num1} é divisível por {num2}")
else:
    print(f"O número {num1} não é divisível por {num2}")

