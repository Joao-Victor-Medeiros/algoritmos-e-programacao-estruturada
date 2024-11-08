#include <stdio.h>

struct complexo {
    float real;
    float imag;
};

struct complexo soma_complexos(struct complexo num1, struct complexo num2) {
    struct complexo resultado;
    resultado.real = num1.real + num2.real;
    resultado.imag = num1.imag + num2.imag;
    return resultado;
}

int main() 
{
    int num, parteImg;
    struct complexo nums;
    printf("Digite um número: ");
    scanf("%d", &num);
    parteImg = num * -1;
    nums.real = num;
    nums.imag = parteImg;
}