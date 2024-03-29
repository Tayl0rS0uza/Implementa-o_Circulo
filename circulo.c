#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"


Circulo* circ_cria(float x, float y, float r){
    
    Circulo *novoCirculo = malloc(sizeof(Circulo));
    
    if (novoCirculo == NULL) {
        printf("Erro ao alocar memoria para o circulo\n");
        exit(EXIT_FAILURE);  // Funcao para encerrar o programa, caso erro na alocacao de memoria //
    }
    
    novoCirculo->x = x;
    novoCirculo->y = y;
    novoCirculo->raio = r;
    return novoCirculo;
}

float circ_area(Circulo *c){
    
    float area = pow(c->raio, 2) * 3.14159265359;
    return area;
}

int circ_concentricos(Circulo *c1, Circulo *c2){
    
    if(c1->x == c2->x && c1->y == c2->y){
        return 1;
    } else {
        return 0;
    } // Retorna 1 se forem concentricos e 0 se nao forem //
}

float circ_raio(Circulo *c){
    
    float raio = c->raio;
    return raio;
}

void circ_libera(Circulo *c){
    free(c); 
}

