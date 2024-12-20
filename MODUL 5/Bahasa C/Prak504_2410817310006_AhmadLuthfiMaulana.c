#include <stdio.h>

int reverse(int x) {
    int hasil = 0;
    while (x > 0) {
        hasil = hasil * 10 + x % 10;
        x /= 10;
    }
    return hasil;
}

int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}