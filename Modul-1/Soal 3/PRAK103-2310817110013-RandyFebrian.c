#include <stdio.h>

int main(){
    float a = 9, b = 6, x = 10, y = 7;
    float hasil = (a + b) *x / y;

    printf("Variabel a bernilai %0.f\n", a);
    printf("Variabel b bernilai %0.f\n", b);
    printf("Variabel x bernilai %0.f\n", x);
    printf("Variabel y bernilai %0.f\n", y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f", hasil);
    return 0;
}