a, b, diskonA, diskonB = 400000, 350000, 13, 21
hasilA = round(a - (a * diskonA / 100))
hasilB = round(b - (b * diskonB / 100))

print("Harga sepatu A adalah", a)
print("Harga sepatu B adalah", b)
print("Sepatu A mendapat diskon {}% sehingga harganya menjadi {}".format(diskonA, hasilA))
print("Sepatu B mendapat diskon {}% sehingga harganya menjadi {}".format(diskonB, hasilB))