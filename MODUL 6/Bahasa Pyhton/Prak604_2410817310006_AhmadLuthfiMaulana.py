x = 0
y = 0
Kode = list(input(""))
Pesan = list(input(""))

PKode = len(Kode)
PPesan = len(Pesan)

if PKode != PPesan:
    print("Panjang kalimat berbeda, pesan palsu")

else:
    for z in range(PKode):
        if " " in Kode[z] and " " in Pesan[z]:
            print(end=" ")
        
        elif Kode[z] == Pesan[z]:
            print("*", end = "")
            x += 1

        else:
            print("#", end = "")
            y += 1

    print("\n* =", x)
    print("# =", y)
    if x >= y:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")    