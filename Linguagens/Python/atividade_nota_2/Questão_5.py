#5 - Programa que verifica se uma pessoa é adulta, adolescente ou criança
idade = int(input("Qual é sua idade?: "))

if idade <=11:
    print("Você ainda é uma criança, tente novamente mais tarde")
elif idade <18:
    print("Eita, você é um adolecente agora")
elif idade == 18:
    print("Você é um desempregado e pode ser preso :) ")
else:
    print("Você é um adulto")
    