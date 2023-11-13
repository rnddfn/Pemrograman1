#include <stdio.h>

int main(){
    float nilai1, nilai2, hasil;
    int operasi;

    while(1){
        printf("pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &operasi);
            if(operasi == 5){
            printf("Terimakasih, telah menggunakan kalkulator Randy Febrian \n");
            break;
        }
            else if(operasi > 5 || operasi < 1){
                printf("Input anda salah, silahkan coba lagi\n\n");
                continue;
            }        
        printf("Masukkan nilai pertama : ");
        scanf("%f", &nilai1);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &nilai2);

        if(operasi == 1){
            hasil = nilai1 + nilai2;
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
        }
        else if(operasi == 2){
            hasil = nilai1 - nilai2;
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);
        }
        else if(operasi == 3){
            hasil = nilai1 * nilai2;
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);            
        }
        else if(operasi == 4){
            hasil = nilai1 / nilai2;
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, hasil);                
        }
    }
    return 0;
}