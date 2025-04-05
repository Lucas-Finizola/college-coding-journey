"""
1 - Faça um progama, ultilizando os Operadores lógiocs, que:
- Pergunte ao usuário se ele está com fome e tem dinheiro
- Apenas nos casos em que ele está com fome e possua dinheiro, indique um local que venda comida
- Mostre uma mensagem, de sua escolha, quando ele não estiver com fome ou não possuir dinheiro 
"""

fome = input("Você está com fome? ")
dinheiro = input("Você tem dinheiro?")

if fome == "sim" and dinheiro == "sim":
    print("Permitame te recomendar um ótimo lugar para comer. Te recomendo tal lugar")
elif fome == "não" or dinheiro == "não":
    if fome == "não":
        a = "Fome"
    else:
        a = "Dinheiro"
print(f"Tudo bem, volte aqui quando tiver {a}")