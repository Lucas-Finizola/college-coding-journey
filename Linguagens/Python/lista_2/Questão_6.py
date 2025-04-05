#Equação de segundo grau

a = int(input("Digite o valor de a: "))
b = int(input("Digite o valor de b: "))
c = int(input("Digite o valor de c: "))

a = a*a
delta = (b*b) -4*(a*c)

if delta <0:
    print("A equação não possui solução real.")
elif delta==0:
    x = ((-b + (delta*((1/2))))/2)
    print("O valor de x: ", x)
else:
    x1 = (((b*-1) + (delta**(1/2))) / (2*a) )
    print("O valor de x1: ", x1)
    x2 = (((b*-1) - (delta**(1/2)))/(2*a))
    print("O valor de x1: ", x2)