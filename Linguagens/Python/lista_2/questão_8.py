#caucular imc
print('Calculadora de IMC')

p = float(input('Digite seu peso, em vez de virgula use os pontos :'))
h = float(input('Dgite sua altura:'))
imc = p / h**2
if imc <= 18.5 :
    print(f'o seu imc é {imc:.2f}, você esta baixo do peso ideal')
if imc >= 18.5 and imc <= 24.9 :
    print(f'seu imc é {imc:.2f}, você esta no peso ideal')
if  imc <= 29 and imc >= 25 :
    print(f'seu imc é {imc:.2f}, você estÁ acima do peso ideal')
if imc >= 30 :
    print(f'seu imc é {imc:.2f}, seu estado atual é de obesidade')
