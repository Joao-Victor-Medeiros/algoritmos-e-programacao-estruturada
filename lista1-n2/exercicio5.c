#include <stdio.h>

int quantosDigitos(int n)
{
    if(n == 0){
        return 0;
    }
    int count = 1;
    int res = n / 10;
    quantosDigitos(res);
    count += 1;
    return count;
}

int main()
{
    printf("%d", quantosDigitos(10));
}