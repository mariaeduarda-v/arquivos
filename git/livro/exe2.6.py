c = int(input("Digite o código do produto:"))

p1 = "Alimento não-perecível"
p2 = "Alimento perecível"
p3 = "Vestuário"
p4 = "Higiene pessoal"
p5 = "Limpeza e utensílios domésticos"

if c == 1:
    print("Este produto é:", p1)
elif c >= 2 and c <= 4:
    print("Este produto é:", p2)
elif c >= 5 and c <= 6:
    print("Este produto é:", p3)
elif c == 7:
    print("Este produto é:", p4)
elif c >= 8 and c <= 15:
    print("Este produto é:", p5)
else:
    print("Inválido.")
