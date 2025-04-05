#8 - Programa que verifica se uma pessoa tem altura suficiente para andar em um brinquedo de parque de diversões (a altura mínima é digitada pelo usuário)

min_altura = float(input("Qual é a altura mínima para entrar nos brinquedos?  "))
altura = float(input("Qual é sua altura? "))

if altura >= min_altura:
    print("Você pode andar nos brinquedos! ")
else:
    print("Você ainda não pode entrar")
