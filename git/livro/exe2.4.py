x = str(input("Qual seu genero?"))
h = float(input("Qual sua altura em metros?"))

f = ("feminino")
m = ("masculino")
c1 = (72.7 * h)- 58
c2 = (62.1 * h)- 44.7
if x == f:
    print("Seu peso ideal é: ", c2)
elif x == m:
    print("Seu peso ideal é: ", c1)
else:
    print("Alternativa inválida")


