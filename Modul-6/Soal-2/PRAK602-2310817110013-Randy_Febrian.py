array = int(input())
kali = 1
matriks = []

element = list(map(int, input().split()))

for i in range(array):
    matriks.append(element[i] * kali)
    kali += 1
    print(matriks[i], end=' ')