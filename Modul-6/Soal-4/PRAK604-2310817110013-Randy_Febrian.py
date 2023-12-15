pesanAsli = input()
pesanMasuk = input()
bintang = 0
pagar = 0

if(len(pesanAsli) != len(pesanMasuk)):
    print("Panjang kalimat berbeda, pesan palsu")
    exit()

for i in range (len(pesanAsli)):
    if pesanAsli[i] == pesanMasuk[i] and pesanAsli[i] != ' ':
        if pesanAsli[i] == ' ' and pesanMasuk[i] == ' ':
            print(" ", end='')
        elif pesanAsli[i] != ' ' and pesanMasuk[i] != ' ':
            bintang += 1
            print("*", end='')
    elif pesanAsli[i] != pesanMasuk[i]:
        pagar += 1
        print("#", end='')
print()
print("* = %d" % bintang)
print("# = %d" % pagar)

if pagar > bintang:
    print("Pesan Palsu")
else:
    print("Pesan Asli")
