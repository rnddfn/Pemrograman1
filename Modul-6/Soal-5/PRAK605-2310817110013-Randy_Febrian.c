#include <stdio.h>

void input_matriks(int array, int matriks[array][array]) {
    for (int i = 0; i < array; i++) {
        for (int j = 0; j < array; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }
}

int main() {
    int ordo;
    scanf("%d", &ordo);

    int matriks_1[ordo][ordo];
    int matriks_2[ordo][ordo];
    int hasil [ordo][ordo];
    printf("Matriks A\n");
    input_matriks(ordo, matriks_1);
    printf("Matriks B\n");
    input_matriks(ordo, matriks_2);

    printf("Matriks AXB\n");
    for (int i = 0; i < ordo; i++) {
        for (int j = 0; j < ordo; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < ordo; k++) {
                hasil[i][j] += matriks_1[i][k] * matriks_2[k][j];
            }
        }
    }
    
    for(int i = 0; i < ordo; i++){
        for (int j = 0; j < ordo; j++){
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    return 0;
}