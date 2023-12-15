import numpy as np

matriks_1 = []
matriks_2 = []
ordo = int(input())
print("Matriks A")
for i in range (ordo):
    matriks_1.append(np.array(list(map(int, input().split()))))
print("Matriks B")
for j in range (ordo):
    matriks_2.append(np.array(list(map(int, input().split()))))

matriks_1 = np.array(matriks_1).reshape(ordo, ordo)
matriks_2 = np.array(matriks_2).reshape(ordo, ordo)
hasil = np.dot(matriks_1, matriks_2)

print("Matriks AXB")
for row in hasil:
    for element in row:
        print(element, end=' ')
    print()