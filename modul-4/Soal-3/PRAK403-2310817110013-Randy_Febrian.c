#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int nilaia = a, nilaib = b;

    if(a > b){
        printf("%d %d - ", a, b);
        for(int i = 0; i < a - b; i++){
            nilaia--, nilaib++;
            if (i < a - b - 1) {
                printf("%d %d - ", nilaia, nilaib);
            } 
            else {
                printf("%d %d\n", nilaia, nilaib);
            }
        }
    }
    else{
        printf("%d %d - ", a, b);
        for(int i = 0; i < b - a; i++){
            nilaia++, nilaib--;
            if (i < b - a - 1) {
                printf("%d %d - ", nilaia, nilaib);
            } 
            else {
                printf("%d %d\n", nilaia, nilaib);
            }
        }
    }  
    return 0;
}