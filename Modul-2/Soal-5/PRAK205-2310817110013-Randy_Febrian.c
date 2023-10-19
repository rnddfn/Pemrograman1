#include <stdio.h>
#include <math.h>

int main(){
    int tinggi, miring;
    scanf("%d %d", &tinggi, &miring);
    int alas = sqrt((miring * miring) - (tinggi * tinggi));
    int keliling = miring + tinggi + alas;
    int luas = (alas * tinggi) / 2;
    
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);
    return 0;
}