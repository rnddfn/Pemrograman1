def reverse(i):
    rev = 0
    while(i != 0):
        sisaBilangan = i % 10
        rev = rev * 10
        rev = rev + sisaBilangan
        i = i // 10
    return rev

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print("%d" % (reverse(C)))