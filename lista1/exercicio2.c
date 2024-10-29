#include <stdio.h>


int reg(int n) {
    if(n == 0){
        return 0;
    }
    printf("%d \n", n);
    reg(n - 1);
}

int bin(int n){
    int divisor = 2, quoci, resto;
    
  
    if(quoci == 0){
        return resto;
    }
    
    quoci = n / divisor;
    resto = n % divisor;
    bin(quoci);
    printf("%d", resto);
}

int main() {
  bin(10);
}