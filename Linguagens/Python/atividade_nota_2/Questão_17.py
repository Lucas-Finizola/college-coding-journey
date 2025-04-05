import random
num_secreto = random.randint(1,10)
palpite = None
vida = 100

while palpite != num_secreto:
    if vida ==0:
        print("Você perdeu")
        break
    else:
        palpite = int(input("Advinhe o número: "))
        if palpite < num_secreto:
            print("Muito  baixo")
            vida = vida - 10
            print(f"Você tem {vida} restantes")
        elif palpite > num_secreto: 
            print("Muito alto! ")
            vida = vida - 10
            print(f"Você tem {vida} restantes")
        else:
            print(f"Acertou! o número é: {num_secreto}")