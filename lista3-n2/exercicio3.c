#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
}CARTESIANO;

float distanciaEntrePontos(int x1, int x2, int y1, int y2)
{
    int firstSub = x2 - x1;
    int secondSub = y2 - y1;
    int root = pow(firstSub, 2) + pow(secondSub, 2);
    float square = sqrt(root);
    printf("%f\n", square);
}

int main() 
{
    CARTESIANO p, q;
    printf("Digite os dois pontos dentro da coordenada A: ");
    scanf("%d %d", &(p.x), &(p.y));
    printf("Digite os dois pontos dentro da coordenada B: ");
    scanf("%d %d", &(q.x), &(q.y));
    distanciaEntrePontos(p.x, q.x, q.y, p.y);
}