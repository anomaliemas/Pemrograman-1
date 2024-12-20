rows, cols = map(int, input().split())
angka=[]
x = 0
isi = list(map(int, input().split()))
for i in range (rows):
    angka.append(isi[x:x+cols])
    x = x + cols
for rows in angka:
    for isi in rows:
        print(isi, end=' ')
    print()