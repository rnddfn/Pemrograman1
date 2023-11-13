#include <stdio.h>

int main(){
    int input_angka, i;
    char simbol[10];
    scanf("%d %s", &input_angka, &simbol);

    for(i = 1; i <= 50; i++){
        if(i % input_angka == 0){
            printf("%s ", simbol);
        }
        else{
            printf("%d ", i);
        }
    }
    return 0;
}