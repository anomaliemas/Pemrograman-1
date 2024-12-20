def sort_two_numbers(a, b):
    if a > b:
        a, b = b, a
    return a, b

a = int(input("Masukkan angka pertama: "))
b = int(input("Masukkan angka kedua: "))

sorted_numbers = sort_two_numbers(a, b)
print("Urutan dari terkecil ke terbesar:", sorted_numbers[0], sorted_numbers[1])