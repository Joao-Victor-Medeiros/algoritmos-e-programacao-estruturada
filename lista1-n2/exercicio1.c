#include <stdio.h>

int fatorial(int n)
{
    int result;
    if(n == 0 || n == 1){
        n = 1;
    }else {
        return n * fatorial(n-1);   
    }
    
}

int restoPorSub(int dividendo, int divisor) {
    int result = dividendo - divisor;
    if(result < divisor){
        return result;
    }
    restoPorSub(result, divisor);
}


int quocientePorSub(int dividendo, int divisor){
    int count=0;
    int result = dividendo - divisor;
    if(result == 0){
        result = count;
    }
    count ++;
    printf("count %d", count);
    
}
int main()
{
    printf("%d \n", quocientePorSub(10, 2));
}