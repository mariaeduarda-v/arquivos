n1 = int(input("Digite o valor do primeiro numero:"))
n2 = int(input("Digite o valor do segundo numero:"))
o = str(input("Digite o simbolo da operação que deseja aplicar:"))

if o == "+":
    print("Resultado:", n1 + n2)
elif o == "-":
    print("Resultado:", n1 - n2)
elif o == "*":
    print("Resultado", n1 * n2)
elif o == "/":
    print("Resultado:", n1 / n2)
else:
    print("Invalido.")
