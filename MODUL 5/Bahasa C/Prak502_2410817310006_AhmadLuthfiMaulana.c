#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
    if (nilai1 - nilai2 < 0) {
        return nilai2 - nilai1;
    } else {
        return nilai1 - nilai2;
    }
}

int mutlak(int angka){
    if (angka < 0) {
        return -angka;
    } else {
        return angka;
    }
}

int main() 
    {
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);

    int Hasil = hitung(a, b) + hitung(c, d);
    printf("%d", mutlak(Hasil));

    return 0;
}