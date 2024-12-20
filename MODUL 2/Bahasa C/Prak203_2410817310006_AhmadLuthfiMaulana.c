#include <stdio.h>

int main() {
    float a, b, i, j, x, y; float Total;
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    Total = (((a-b)*i)/j)-(x+y);
    printf("\n%.3f\n", Total);
    return 0;
}