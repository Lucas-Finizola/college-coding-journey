#4. Escreva um programa que leia uma letra e verifique se ela é uma vogal ou uma consoante

letra = input("Digite uma letra: ")

vogais = ["a","e","i","o","u"]

for i in vogais:
  if letra in vogais:
    print(f"A letra {letra} é uma vogal")
    break
  else:
      print(f"A letra {letra} não é uma vogal")
      break