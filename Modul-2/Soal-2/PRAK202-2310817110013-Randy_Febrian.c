#include <stdio.h>

int main(){
    float angka1, angka2;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &angka1);
    printf("Masukkan Nilai Kedua  : ");
    scanf("%f", &angka2);
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\" ", angka1, angka2, angka1 + angka2);
    return 0;
}