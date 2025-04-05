#juros compostos anual

c = float(input("Digite o capital: "))
j = int(input("Digite os juros anuais: "))
n = int(input("Digite o número de anos para a simulação: "))


for i in range(n):
    juros = c*(j/100)
    acumulado_i = c + juros
    c = acumulado_i

print(f"O capital final depois de {n} anos, foi de {c} trocados")