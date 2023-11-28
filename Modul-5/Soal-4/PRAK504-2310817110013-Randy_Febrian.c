#include <stdio.h> 
int reverse(int i){ 
// Lengkapi Function ini
    int rev = 0;
    while(i != 0){
        int sisaBilangan = i % 10;
        rev = rev * 10;
        rev = rev + sisaBilangan;
        i = i /10;
    }
    return rev;
} 

int main() {     
    int A, B; 
    scanf("%d %d",&A,&B); 
    A=reverse(A);     
    B=reverse(B);     
    int C = A+B;     
    printf("%d",reverse(C)); 
} 
