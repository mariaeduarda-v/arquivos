a = int(input("Digite seu ano de nascimento:"))

i = 2025 - a

print("Sua idade é:", i)

if i <= 16:
    print("Você ainda não tem idade para votar e nem para tirar habilitação.")
elif i >= 16 and i < 18:
    print("Você ja possui idade para votar, mas não para tirar habilitação.")
elif i >= 18:
    print("Você ja possui idade para votar e tirar habilitação.")
else:
    print("Resposta inválida.")