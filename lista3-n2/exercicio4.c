#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

typedef struct {
    Ponto p1, p2;
} Segmento;

float calcularComprimento(Segmento s) {
    return sqrt(pow(s.p2.x - s.p1.x, 2) + pow(s.p2.y - s.p1.y, 2));
}

int main() {
    Segmento segmento;

    printf("Digite as coordenadas do primeiro ponto (x y): ");
    scanf("%f %f", &segmento.p1.x, &segmento.p1.y);

    printf("Digite as coordenadas do segundo ponto (x y): ");
    scanf("%f %f", &segmento.p2.x, &segmento.p2.y);

    float comprimento = calcularComprimento(segmento);
    printf("O comprimento do segmento é: %.2f\n", comprimento);

    return 0;
}
