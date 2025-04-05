#3- Programa que verifica se uma pessoa pode votar
idade = int(input(f"Digite sua idade: "))

if idade == 16:
    print("Você já pode votar, mas não é obrigado")
elif idade >=18:
    print("Você é obridado a votar")
else:
    print(f"Você não pode votar")