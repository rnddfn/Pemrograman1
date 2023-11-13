jumlah, kelipatan = map(int, input().split())
hasil = 0

for i in range(1, jumlah + 1):
    hasil += i * kelipatan
    for j in range(i, 0, -1):
        print("(%d * %d)" % (j, kelipatan), end=" + " if j > 1 else "")  # Print each term
    print("= %d" % hasil)