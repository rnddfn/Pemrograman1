#include <stdio.h>

void Biodata(int BirthYear, char MyName[], char Origin[]) {
    int tahun_sekarang = 2020;
    // Lengkapi Function ini
    printf("Perkenalkan Nama Saya: %s\n", MyName);
    printf("Umur Saya: %d\n", tahun_sekarang - BirthYear);    
    printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);
    printf("Asal Saya Dari: %s\n", Origin);
}

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf("%d", &tahunLahir);
    scanf("%s", &Namaku);
    scanf("%s", &Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}
