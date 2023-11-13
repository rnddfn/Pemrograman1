input_angka, simbol = input().split()

for i in range(1, 51):
    if i % int(input_angka) == 0:
        print(simbol, end=' ')
    else:
        print(i, end=' ')