#include <stdio.h>

void mdc(int a, int b) {
    if(b == 0){
       return;
    }
    int result = a % b;
    printf("%d", result);
    mdc(b, result);
}


int main() {
    mdc(48, 18);
    return 0;
}