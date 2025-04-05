#Programa que verifica se um número é primo

num1 = int(input("Digite um número: "))
x = 0

for c in range(1,num1 +1):
    if num1%c==0:
        x +=1
if x ==2:
    print("O número é primo")
else:
    print("Ele não é primo")
        