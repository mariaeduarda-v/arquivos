v = float(input("Digite o valor da etiqueta:"))
c = int(input("Digite o código de pagamento:"))

d1 = 10 / 100
d2 = 5 / 100

if c == 1:
    print("Valor a pagar:", v - (v * d1))
elif c == 2:
    print("Valor a pagar:", v - (v * d2))
elif c == 3:
    print("Valor a pagar:", v)
elif c == 4:
    print("Valor a pagar:", v + (v * d1))
else:
    print("Código inválido.")
