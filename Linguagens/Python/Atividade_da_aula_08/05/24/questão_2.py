"""
2 - faça um progama, ultilizando operadores lógicos, que:
- Peça para o usuário inserir o nome de três produtos de mercado e sues respectivos preços
- Mostre na tela o produto mais barato
"""
print("Cadastro de produtos no supermecado")

produto_1 = input("Digite o nome do primeiro produto: ")
preco_1 = float(input("Digite o valor do produto: "))

produto_2 = input("Digite o nome do primeiro produto: ")
preco_2 = float(input("Digite o valor do produto: "))

produto_3 = input("Digite o nome do primeiro produto: ")
preco_3 = float(input("Digite o valor do produto: "))


if preco_1 < preco_2 and preco_1 < preco_3:
    print(f"O produto {produto_1} é o mais barato e seu valor é de R$ {preco_1}")
elif preco_2 < preco_1 and preco_2 < preco_3:
    print(f"O produto {produto_2} é o mais barato e seu valor é de R$ {preco_2}")
else:
    print(f"O produto {produto_3} é o mais barato e seu valor é de R$ {preco_3}")






