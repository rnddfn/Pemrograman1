#include <stdio.h>
#include <math.h>

int main(){
    int alas = 5, tinggi = 12;
    int miring = sqrt((alas * alas) + (tinggi * tinggi));
    int keliling = alas + miring + tinggi, luas = (alas * tinggi) / 2;

    printf("Diketahui:\n");
    printf("alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab : \n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);
    return 0;
}