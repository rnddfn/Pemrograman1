#include <stdio.h>

int main(){
    int kali = 1;
    int kolom;
    scanf("%d", &kolom);

    int matriks[kolom];
    for(int i = 0; i < kolom; i++){
        scanf("%d", &matriks[i]);
        matriks[i] = matriks[i] * kali;
        printf("%d ", matriks[i]);
        kali++;
    }
    return 0;
}