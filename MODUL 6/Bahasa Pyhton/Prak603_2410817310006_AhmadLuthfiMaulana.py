baris1, baris2 = map(int, input().split())

if baris1 != baris2:
    print("Jumlah tidak sama")
else:
    bil1 = list(map(int, input().split()))
    bil2 = list(map(int, input().split()))

    for i in range(baris1):
        print(bil1[i] * bil2[i], end=' ')