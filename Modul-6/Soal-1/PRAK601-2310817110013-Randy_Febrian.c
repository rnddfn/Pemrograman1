#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    int matriks[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &matriks[i][j]);
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}