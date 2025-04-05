"""
faça um progama, ultilizando operadores lógicos, que pergunte ao usuário se ele é pedestre
ou se é motorista e realize, a parti da resposta, os seguintes casos:
1ª caso: 
    - Se ele está na faixa de predestre
    - Se o semárforo está vermelho para os carros
o progama deve mostrar na tela que o usuário pode atravessar a rua somemente se as duas condições
forem verdadeiras
"""

status = input("Você é pedestre ou motorista? ")

if status == "pedestre":
    faixa = input("Você está na faixa?")
    semar = input("O semárforo está aberto ?")
    if faixa=="sim" and semar=="sim":
       print("Você pode atravessar a rua")
    else:
        print("Você não pode atravessar a rua ainda")
if status !="pedestre":
    print("Siga viagem :)")


