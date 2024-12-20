#include <stdio.h>

int main() {
    int x, y, rows, cols;

    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (x = 0; x < rows; x++) {
        for (y = 0; y < cols; y++) {
            scanf("%d", &matrix[x][y]);
        }
    }

    for (x = 0; x < rows; x++) {
        for (y = 0; y < cols; y++) {
            printf("%d ", matrix[x][y]);
        }
        printf("\n");
    }

    return 0;
}