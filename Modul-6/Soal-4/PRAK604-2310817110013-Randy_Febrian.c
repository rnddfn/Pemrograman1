#include <stdio.h>
#include <string.h>

int main(){
    char pesanAsli [50];
    char pesanMasuk [50];
    int bintang = 0;
    int pagar = 0;

    fgets(pesanAsli, sizeof(pesanAsli), stdin);
    fgets(pesanMasuk, sizeof(pesanMasuk), stdin);

    if(strlen(pesanAsli) != strlen(pesanMasuk)){
        printf("Panjang kalimat berbeda, pesan palsu");
        return 1;
    }

    for(int i = 0; i < strlen(pesanAsli) - 1; i++){
        if(pesanAsli[i] == pesanMasuk[i]){
            if(pesanAsli[i] == ' ' && pesanMasuk[i] == ' '){
                printf(" ");
            }
            else if(pesanAsli[i] != ' ' && pesanMasuk[i] != ' '){
                bintang++;
                printf("*");
            }
        }
        else if(pesanAsli[i] != pesanMasuk[i]){
           pagar++;
           printf("#");
        }

    }
    printf("\n");
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if(pagar > bintang){
        printf("pesan palsu\n");
    }
    else{
        printf("pesan asli\n");
    }
    return 0;
}