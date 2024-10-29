#include <stdio.h>

void  torreHanoi(int discos, char origem, char auxiliar, char destino)
{
    if(discos==1){
        printf("mova o disco 1 de %c para %c \n", origem, destino);
        count++;
        return;
    }

    torreHanoi(discos-1, origem, destino, auxiliar);

    printf("Mova o disco %d de %c para %c\n", discos, origem, destino);
    count++;

    torreHanoi(discos-1, auxiliar, origem, destino);
}

int main()
{
    
}