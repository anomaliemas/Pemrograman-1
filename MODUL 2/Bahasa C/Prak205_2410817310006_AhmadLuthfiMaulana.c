#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, keliling, luas;
    scanf("%f", &a);
    scanf("%f", &b);

    c = sqrt((b*b)-(a*a));
    keliling = a + b + c;
    luas = 0.5 * c *a;

    printf("Alas = %.f cm \n", c);
    printf("Tinggi = %.f cm \n",a);
    printf("Keliling = %.f cm \n", keliling);
    printf("Luas = %.f cm^2 \n", luas);
    return 0;
}