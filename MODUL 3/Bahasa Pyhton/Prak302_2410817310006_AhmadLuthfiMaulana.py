nilai = int(input())

if nilai >= 80:
    hasil = 'A'
elif nilai >= 70:
    hasil = 'B'
elif nilai >= 60:
    hasil = 'C'
elif nilai >= 50:
    hasil = 'D'
else:
    hasil = 'E'

print(hasil)