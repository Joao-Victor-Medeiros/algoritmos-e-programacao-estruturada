#include <stdio.h>

int main() {
    int numVector[5];
    for(int i = 0; i < 5; i++){
        int num;
        printf("Digite um numero numero: \n");
        scanf("%d", &numVector[i]);
        printf("Numero digitado: %d \n", numVector[i]);
    }
    for(int j = 5; j > 0; j--){
        printf("%d", numVector[j]);
    }
}