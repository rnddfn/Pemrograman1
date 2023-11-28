#include <stdio.h> 
 
//Buatlah Function Disini 
int MaxBilangan(int i, int j, int k, int l){
    if(i > j && i > k && i > l){
        return(i);
    }
    else if(j > i && j > k && j > l){
        return(j);
    }
    else if(k > i && k > j && k > l){
        return(k);
    }
    else if(l > i && l > j && l > k){
        return(l);
    }
}

int main() {  	
    int a, b, c, d;      	
    scanf("%d %d %d %d", &a, &b, &c, &d); 
    int hasil = MaxBilangan(a, b, c, d); 
    printf("%d", hasil);    
    return 0; 
} 
