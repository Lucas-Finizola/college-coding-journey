#hipotenusa de um triangulo
print("Cálculadora de hipotenusa")
a = int(input("Digite o valor do cateto a: "))
b = int(input("Digite o valor do cateto b: "))

h = (((a**2)+(b**2))**0.5)
print(f"A hipotenuza é de +/- {h:.3f}")