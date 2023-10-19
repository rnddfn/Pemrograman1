#include <stdio.h>

int main(){
    char nama[30]; char NIM[30]; char paralel[30]; char TTL[30]; char alamat[50]; char hobby[30]; char no_hp[30];

    //INPUT
    printf("INPUT\n");
    printf("Nama                : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                 : ");
    fgets(NIM, sizeof(NIM), stdin);
    printf("Kelas Paralel       : ");
    fgets(paralel, sizeof(paralel), stdin);
    printf("Tempat/Tanggal Lahir: ");
    fgets(TTL, sizeof(TTL), stdin);
    printf("Alamat              : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby               : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP              : ");
    fgets(no_hp, sizeof(no_hp), stdin);
    printf("\n");

    //OUTPUT
    printf("OUTPUT\n");
    printf("Nama                : %s", nama);
    printf("NIM                 : %s", NIM);
    printf("Kelas Paralel       : %s", paralel);
    printf("Tempat/Tanggal Lahir: %s", TTL);
    printf("Alamat              : %s", alamat);
    printf("Hobby               : %s", hobby);
    printf("No. HP              : %s", no_hp);
    return 0;
}