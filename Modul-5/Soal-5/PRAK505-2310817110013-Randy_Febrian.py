def Biodata(BirthYear, MyName, Origin):
    tahun_sekarang = 2020
    print("Perkenalkan Nama Saya: %s" % MyName)
    print("Umur Saya: %d" % (tahun_sekarang - BirthYear))
    print("Saya Adalah Angkatan: %d" % tahun_sekarang)
    print("Asal Saya Dari: %s" % Origin)

tahunLahir = int(input())
Namaku = input()
Asal = input()
Biodata(tahunLahir, Namaku, Asal)