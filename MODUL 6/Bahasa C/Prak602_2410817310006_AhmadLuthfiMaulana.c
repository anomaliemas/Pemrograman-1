#include <stdio.h>

int main() {
    int jumlahRuangan, Isi;

    scanf("%d", &jumlahRuangan);

    int angka[jumlahRuangan];

    for (int i = 0; i < jumlahRuangan; i++) {
        scanf("%d", &Isi);
        angka[i] = Isi; 
    }

    for (int i = 0; i < jumlahRuangan; i++) {
        printf("%d ", angka[i] * (i + 1));
    }

    return 0;
}