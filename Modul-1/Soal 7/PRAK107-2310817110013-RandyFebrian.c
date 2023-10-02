#include <stdio.h>

int main(){
    int sisi1 = 4, sisi2 = 5, sisi3 = 7;
    int keliling = 16;
    int Htanah = 85000;
    int Tbiaya = keliling * Htanah;

    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n\n", Htanah);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d\n", Tbiaya);
    return 0;
}