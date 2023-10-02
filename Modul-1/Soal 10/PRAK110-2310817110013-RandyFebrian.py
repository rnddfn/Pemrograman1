from math import sqrt

alas, tinggi, miring = 5, 12, round(sqrt((5 * 5) + (12 * 12)))
keliling, luas = alas + tinggi + miring, round((alas * tinggi) / 2)

print("Diketahui:")
print("Alas = {} cm".format(alas))
print("Tinggi = {} cm\n".format(tinggi))
print("Jawab:")
print("Sisi A = {} cm".format(tinggi))
print("Sisi B = {} cm".format(miring))
print("Sisi c = {} cm".format(alas))
print("Keliling = {} cm".format(keliling))
print("Luas = {} cm".format(luas))