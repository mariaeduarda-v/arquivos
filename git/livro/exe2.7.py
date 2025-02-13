i = int(input("Digite sua idade:"))

c1 = "Infantil A"
c2 = "Infantil B"
c3 = "Juvenil A"
c4 = "Juvenil B"
c5 = "Adulto"

if i >= 5 and i <= 7:
    print("Sua categoria é:", c1)
elif i >= 8 and i <= 10:
    print("Sua categoria é:", c2)
elif i >= 11 and i <= 13:
    print("Sua categoria é:", c3)
elif i >= 14 and i <= 17:
    print("Sua categoria é:", c4)
else: 
    print("Sua categoria é:", c5) 