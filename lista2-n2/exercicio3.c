#include <stdio.h>


int main ()
{
    int valorCedulas[5] = {1, 5, 10, 50, 100};
    int valor;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    int valor100 = valor / 100;
    int mod100 = valor % 100;

    int valor50 = mod100 / 50;
    int mod50 = valor % 50;

    int valor10 = mod50 / 10;
    int mod10 = valor % 10;

    int valor5 = mod10 / 5;
    int mod5 = valor % 5;

    int valor1 = valor / 1;
    int mod1 = valor % 1;

    printf("Para o valor de R$ %d, são necessárias:\n", valor);
    printf("%d notas de R$100\n", valor100);
    printf("%d notas de R$50\n", valor50);
    printf("%d notas de R$10\n", valor10);
    printf("%d notas de R$5\n", valor5);
    printf("%d notas de R$1\n", mod1);

}