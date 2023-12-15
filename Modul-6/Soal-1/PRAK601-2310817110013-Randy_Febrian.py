import numpy as np

x, y = map(int, input().split())

element = np.array(list(map(int, input().split())))
matriks = element.reshape((x, y))

for i in range(x):
    for j in range(y):
        print(matriks[i][j], end=' ')
    print()