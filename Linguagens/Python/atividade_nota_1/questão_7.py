"""
Ler 4 valores reais (a,b,c e d)
Média aritimética;
Média harmônica (MH);
Média geométrica (MG);
Média quadrática(MQ);
"""

a = float(input("Digite o valor de a: "))
b = float(input("Digite o valor de b: "))
c = float(input("Digite o valor de c: "))
d = float(input("Digite o valor de d: "))

MA = ((a+b+c+d)/4)
MH = (4/((1/a)+(1/b)+(1/c)+(1/d)))
MG = ((a*b*c*d)**0.25)
MQ = (((a**2)+(b**2)+(c**2)+(d**2))/4)

print(f"Média aritimética: {MA}\nMédia harmônica: {MH:.2f}\nMédia geométrica: {MG:.2f}\nMédia quadrática: {MQ:.2f}")