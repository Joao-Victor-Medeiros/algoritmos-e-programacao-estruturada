#include <stdio.h>

int main ()
{
    int w[9] = {};
    int i = 5;

    w[0] = 17;
    w[i/2] = 9;
    w[2*i-2] = 95;
    w[i-1] = w[8]/2;
    w[i] = w[2];
    w[i+1] = w[i]+w[i-1];
    w[w[2]-2] = 78;
    w[w[i]-1] = w[1]*w[i];

    for(int i = 0; i < 9; i++)
    {
        printf("%d", w[i]);
    }
}