#include <stdio.h>

int main(){
    float putaran = 5;
    float jarak = 14;
    float jarijari = (jarak / putaran) / (2 * 3.14);

    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.0f putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f kilometer\n\n", jarak);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jarijari);
    return 0;
}