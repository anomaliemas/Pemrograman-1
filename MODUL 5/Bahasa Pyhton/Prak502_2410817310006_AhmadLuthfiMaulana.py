def hitung(nilai1, nilai2):
    return abs(nilai1 - nilai2)  

def main():
    a, b, c, d = map(int, input().split())
    
    Hasil = hitung(a, c) + hitung(b, d)
    print(Hasil)

if __name__ == "__main__":
    main()