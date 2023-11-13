while(1):
    print("pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    operasi = int(input("Masukkan pilihan : "))
    if(operasi == 5):
        print("Terimakasih, telah menggunakan kalkulator Randy Febrian")
        break
    elif(operasi > 5 or operasi < 1):
        print("Input anda salah, silahkan coba lagi\n")
        continue

    nilai1 = float(input("Masukkan nilai pertama : "))
    nilai2 = float(input("Masukkan nilai kedua : "))

    if operasi == 1:
        hasil = nilai1 + nilai2
        print("hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n" % (nilai1, nilai2, hasil))
    elif operasi == 2:
        hasil = nilai1 - nilai2
        print("hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n" % (nilai1, nilai2, hasil))
    elif operasi == 3:
        hasil = nilai1 * nilai2
        print("hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n" % (nilai1, nilai2, hasil))
    elif operasi == 4:
        hasil = nilai1 / nilai2
        print("hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n" % (nilai1, nilai2, hasil))
