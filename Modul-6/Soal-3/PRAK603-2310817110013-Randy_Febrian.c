#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int hasil[n1];

    if(n1 != n2){
        printf("Jumlah tidak sama");
        return 1;
    }

    int matriks[2][n1];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n1; j++){
            scanf("%d", &matriks[i][j]);
        }
    }

    for(int i = 0; i < n1; i++){
        hasil[i] = matriks[0][i] * matriks[1][i];
        printf("%d ", hasil[i]);
    }
    return 0;
}