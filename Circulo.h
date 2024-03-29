#ifndef CIRCULO_H
#define CIRCULO_H
#include <math.h>

// Criacao da Struct do tipo Circulo  //
typedef struct Circulo {
  float x; 
  float y; 
  float raio;
} Circulo;

// Cria um novo circulo com centro (x, y) e raio r //
Circulo* circ_cria(float x, float y, float r);

// Libera a memoria alocada para um circulo //
void circ_libera(Circulo *c);

// Calcula a area do circulo //
float circ_area(Circulo *c);

// Verifica se dois circulos possuem o mesmo centro //
int circ_concentricos(Circulo *c1, Circulo *c2);

// Obtem o raio do circulo //
float circ_raio(Circulo *c);

#endif 