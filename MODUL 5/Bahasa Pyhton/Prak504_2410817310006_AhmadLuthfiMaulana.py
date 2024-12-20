def reverse(x):
    return int(str(x)[::-1])

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))