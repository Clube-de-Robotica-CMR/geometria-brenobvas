#include <stdio.h>
#include "cs50.h"
#include "geometria.h"

int main(void)
{
    int lado;
    do 
    {  lado = get_int("Lado: ");
    } 
    while (lado < 0);
    int area = calcular_area(lado);
    printf("Area do quadrado: %i\n", area);
}