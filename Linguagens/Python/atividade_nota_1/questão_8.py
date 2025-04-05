"""
Distancia entre os pontos A e B
A = (x1, y1)
B = (x2, y2)
Distancia = (x2 - x1)**2 + (y2 - y1) - tudo dentro da raiz
"""
print("Cálculando a disntacia entre dois pontos")
print("Digite as coordenbadas do Ponto A:")
x1 = int(input("Digite o valor de x: "))
y1 = int(input("Digite o valor de y: "))

print("Digite as coordenbadas do Ponto B:")
x2 = int(input("Digite o valor de x: "))
y2 = int(input("Digite o valor de y: "))

distancia = ((((x2-x1)**2) + ((y2-y1)**2))**0.5)

print(f"A distancia entre os pontos é de: {distancia}")
