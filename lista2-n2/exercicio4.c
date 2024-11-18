#include <stdio.h>

void minmax( int v[], int n)
{
    v[n];
    int *min, *max;
    int maior[n];

    for(int i = 0; i < n; i++){
        if(v[i] < v[i+1]){
            min = &v[i];
            printf("%d \n", *min);
        }else {
            max = &v[i];
            maior[i] = *max;
            printf("o numero maior %d\n", maior[i]);
        }
        for(int i = 0; i < 3; i++){
            if(maior[i] < maior[i+1]){
                printf("o menor numero: %d\n", maior[i]);
            }
        }
    }
}

int main()
{
    int vector[5] = {10, 5, 73, 9, 11};
    minmax(vector, 5);
}