"""
Ler dois numeros inteiros e informar:
O dividendo
O divisor 
O Quociente
O resto do pirmeiro pelo segundo
Do segundo pelo primeiro
"""

num1 = int(input("Digite o primeiro número: "))
num2 = int(input("Digite o segundo número: "))

dividendo = num1
divisor = num2
quociente = num1/num2
resto1 = num1%num2
resto2 = num2%num1

print(f"Dividendo: {num1}\nDivisor: {num2}\nQuociete: {quociente}")
print(f"O resto do primeiro pelo segundo: {resto1}\nO resto do segundo pelo primeiro: {resto2}")
