#include <stdio.h>

int main(){
    int jumlah, kelipatan;
    int hasil = 0;
    scanf("%d %d", &jumlah, &kelipatan);

    for(int i = 1; i <= jumlah; i++){
        hasil = hasil + (i * kelipatan); 
        for(int j = i; j >= 1; j--){
            printf("(%d * %d)", j, jumlah);
            if(j > 1){
                printf(" + ");
            }
        }
        printf(" = %d\n", hasil);
    }
    return 0;
}