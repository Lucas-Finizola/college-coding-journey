#Programa que verifica se uma pessoa tem idade suficiente para dirigir

min_idade = 18
idade = int(input("Qual é sua altura? "))

if idade >= min_idade:
    print("Você pode dirigir! ")
else:
    print("Você ainda não pode dirigir")