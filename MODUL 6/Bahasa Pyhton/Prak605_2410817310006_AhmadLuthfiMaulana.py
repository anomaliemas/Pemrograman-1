n = int(input())

Matriks_A = []
Matriks_B = []
Matriks_AXB = [[0] * n for _ in range(n)]

print("Matriks A")
for r in range(n):
    row = list(map(int, input().split()))
    Matriks_A.append(row)

print("Matriks B")
for r in range(n):
    row = list(map(int, input().split()))
    Matriks_B.append(row)

for r in range(n):
    for y in range(n):
        jumlah = 0
        for a in range(n):
            jumlah += Matriks_A[r][a] * Matriks_B[a][y]
        Matriks_AXB[r][y] = jumlah

print("Matriks AXB")
for r in range(n):
    print(" ".join(map(str, Matriks_AXB[r])))