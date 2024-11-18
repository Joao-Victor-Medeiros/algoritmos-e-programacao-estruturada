#include <stdio.h>


typedef struct{
    int hr;
    int min;
    int seg;
}HORARIO;

int main() 
{
    HORARIO horario = {10, 10, 10};
    printf("%d:%d:%d \n", horario.hr, horario.min, horario.seg);
    
}