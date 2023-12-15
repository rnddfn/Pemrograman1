import numpy as np

n1, n2 = map(int, input().split())
hasil = []
if n1 != n2:
    print("Jumlah tidak sama")
    exit()

matriks_1 = np.array(list(map(int, input().split())))
matriks_2 = np.array(list(map(int, input().split())))

for i in range (n1):
    hasil.append(matriks_1[i] * matriks_2[i])
    print(hasil[i], end=' ')