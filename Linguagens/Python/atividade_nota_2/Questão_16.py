#Programa que verifica se um número é par, ímpar ou positivo

num = int(input("Digite um número: "))
if num%2==0:
    print(f"O número {num} é par")
elif num%2!=0:
    print(f"O número {num} é impar")
elif num >0:
    print(f"O número {num} é positivo")
else:
    print(f"O número {num} é negativo")