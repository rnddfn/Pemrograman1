pi = 22/7
jumlah_input = input().split()

if len(jumlah_input) == 2:
    jarijari, tinggi = map(float, jumlah_input)
elif len(jumlah_input) == 1:
    jarijari = float(jumlah_input[0])
    tinggi = float(input())
else:
    print("Masukkan 2 angka secara vertikal atau horizontal")
    
volume = (pi * (jarijari * jarijari) * tinggi)
luas = (((pi * (jarijari * jarijari)) * 2) * 2 * pi * jarijari * tinggi)
keliling = (2 * pi * jarijari)

print("%.2f" % (volume))
print("%.2f" % (luas))
print("%.2f" % (keliling))