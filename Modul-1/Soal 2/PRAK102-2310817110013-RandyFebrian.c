#include <stdio.h>

int main(){
    float a = 4, b = 8, c = 3;
    float hasil = a * b / c;

    printf("Variabel a berniilai %.0f\n", a);
    printf("Variabel b berniilai %.0f\n", b);
    printf("Variabel c berniilai %.0f\n", c);
    printf("Hasil dari a dikali b dibagi c adalah %.6f", hasil);
    return 0;
}