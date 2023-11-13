#include <stdio.h>

int main(){
    int angka;
    scanf("%d", &angka);

    for(int i = 1; i <= angka; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    for(int j = angka; j >= 1; j--){
        if(j % 2 == 0){
            printf("%d ", j);
        }
    }
    return 0;
}