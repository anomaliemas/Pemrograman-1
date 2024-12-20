jumlah_ruangan_kolom = int(input())

isi = list(map(int, input().split()))

for i in range(jumlah_ruangan_kolom):
    print((i + 1) * isi[i], end=" ")