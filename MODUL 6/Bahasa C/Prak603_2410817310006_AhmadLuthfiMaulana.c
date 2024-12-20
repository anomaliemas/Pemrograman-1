#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int bil1[n1], bil2[n2];

        for (int i = 0; i < n1; i++) {
            scanf("%d", &bil1[i]);
        }

        for (int i = 0; i < n2; i++) {
            scanf("%d", &bil2[i]);
        }

        for (int i = 0; i < n1; i++) {
            printf("%d ", bil1[i] * bil2[i]);
        }
        printf("\n");
    }

    return 0;
}