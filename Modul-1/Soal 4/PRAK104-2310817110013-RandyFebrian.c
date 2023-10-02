#include <stdio.h>

int main(){
    int sepatuA = 400000, sepatuB = 350000;
    int diskon1 = 13, diskon2 = 21;
    int hasilA = sepatuA - (sepatuA * diskon1 /100), hasilB = sepatuB - (sepatuB * diskon2 /100);

    printf("Harga sepatu A adalah %d\n", sepatuA);
    printf("Harga sepatu B adalah %d\n", sepatuB);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon1, hasilA );
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", diskon2, hasilB );  
    return 0;  
}