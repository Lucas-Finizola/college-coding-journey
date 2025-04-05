#Programa que verifica se uma pessoa é alta o suficiente para jogar basquete (a altura é digitada pelo usuário)
med_altura = 1.96

altura = float(input("Qual é sua altura? "))

if altura >= med_altura:
    print("Você tem a altura média de um jogador da NBA")
else:
    print("Apesar ser mais baixo que a média dos outros jogadores, você ainda pode jogar basquete profissional!")
