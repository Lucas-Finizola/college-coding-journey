#combinação simples, onde intervalo é decidido pelo user

def fatorial(n):
    a = n
    b = a
    for i in range(a-1):
     if a>0:
        a = a-1
        b = b*(a)
    return b


n1 = int(input("Digite o número de elementos do conjunto: "))
n2 = int(input("Digite o número de objetos escolhidos pelo conjuto: "))

n = fatorial(n1)
r = fatorial(n2)
nr = fatorial(n1-n2)

combinacao = n /(r*(nr))

print(f"O número de combinações foi de {combinacao} possibilidades")