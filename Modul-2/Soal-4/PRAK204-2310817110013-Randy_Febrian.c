#include <stdio.h>
#include <math.h>

int main(){
    float pi = 3.142857;
    float jarijari, tinggi;
    scanf("%f %f", &jarijari, &tinggi);
    float volume = (pi * (jarijari * jarijari) * tinggi);
    float luas = (((pi * (jarijari * jarijari)) * 2) * 2 * pi * jarijari * tinggi);
    float keliling = (2 * pi * jarijari);
    printf("%.2f\n", volume);
    printf("%.2f\n", luas);
    printf("%.2f\n", keliling);
}