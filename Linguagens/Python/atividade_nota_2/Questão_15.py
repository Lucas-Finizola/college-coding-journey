#Programa que verifica se um número é perfeito
n = int(input("Digite um número: "))
a = 1
soma = 0

while (n/2) <= a :
    if n%a==0:
        soma = soma + a
    n +=1
if n==soma:
    print(f"O número {n} é perfeito")
else:
    print(f"O número {n} não é perfeito")
