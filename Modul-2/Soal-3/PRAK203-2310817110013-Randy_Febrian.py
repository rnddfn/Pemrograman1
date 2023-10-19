jumlah_input = input().split()

if len(jumlah_input) == 6:
    a, b, i, j, x, y = map(float, jumlah_input)
elif len(jumlah_input) == 2:
    a, b = map(float, jumlah_input)
    i, j = map(float, input().split())
    x, y = map(float, input().split())
else:
    print("Masukkan 6 angka secara horizontal atau 2 angka perbaris sebanyak 3 baris")
hasil = (a - b) * i / j  - (x + y)
print("%.3f" % hasil)