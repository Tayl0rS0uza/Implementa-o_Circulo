#include<stdio.h>
#include "circulo.h"


int main()
{
    Circulo c1 = *circ_cria(0, 0, 5);
    Circulo c2 = *circ_cria(0, 0, 10);

    printf("Area do circulo 1: %.2f\n", circ_area(&c1));
    printf("Area do circulo 2: %.2f\n", circ_area(&c2));

    if (circ_concentricos(&c1, &c2)){
        printf("\nOs circulos sao concentricos\n\n");
    } else {
        printf("\nOs circulos nao sao concentricos\n\n");
    }
    
    circ_libera(&c1);
    circ_libera(&c2);

    return 0;
}