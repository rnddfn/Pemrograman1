from math import sqrt

jumlah_input = input().split()

# A adalah tinggi dan B adalah miring
if len(jumlah_input) == 2:
    A, B = map(float, jumlah_input)
elif len(jumlah_input) == 1:
    A = float(jumlah_input[0])
    B = float(input())
else:
    print("Masukkan 2 angka secara vertikal atau horizontal")

# C adalah alas
C = sqrt((B * B) - (A * A))
luas = (C * A)/2
keliling = A + B + C

print("Alas = %d cm" % C)
print("Tinggi = %d cm" % A)
print("Keliling = %d cm" % keliling)
print("Luas = %d cm^2" % luas)