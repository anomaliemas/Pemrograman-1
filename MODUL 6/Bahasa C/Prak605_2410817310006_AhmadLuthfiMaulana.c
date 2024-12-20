#include <stdio.h>

int main() {
    int Matriks_A[10][10], Matriks_B[10][10], Matriks_AXB[10][10];
    int r, y, a, n, jumlah = 0;

    scanf("%d", &n);

    printf("Matriks A\n");
    for (r = 0; r < n; r++) {
        for (y = 0; y < n; y++) {
            scanf("%d", &Matriks_A[r][y]);
        }
    }

    printf("Matriks B\n");
    for (r = 0; r < n; r++) {
        for (y = 0; y < n; y++) {
            scanf("%d", &Matriks_B[r][y]);
        }
    }

    for (r = 0; r < n; r++) {
        for (y = 0; y < n; y++) {
            jumlah = 0;
            for (a = 0; a < n; a++) {
                jumlah += Matriks_A[r][a] * Matriks_B[a][y];
            }
            Matriks_AXB[r][y] = jumlah;
        }
    }

    printf("Matriks AXB\n");
    for (r = 0; r < n; r++) {
        for (y = 0; y < n; y++) {
            printf("%d ", Matriks_AXB[r][y]);
        }
        printf("\n");
    }

    return 0;
}