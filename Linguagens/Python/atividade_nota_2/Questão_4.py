#4 - Programa que verifica se um número está dentro de um intervalo (digitado pelo usuário)
num0 = int(input("Digite o número para veriifcar: "))
num1 = int(input("Digite o valor do inicio do intervalo: "))
num2 = int(input("Final do intervalo: "))

if  num1 <= num0 <=num2:
    print("O número está do intervalo")
else:
    print("O número não está dentro do intervalo")
