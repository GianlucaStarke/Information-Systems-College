#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Tipo estruturado Esfera
typedef struct{
    double diametro;
}Esfera;

// Constructor do tipo estruturado Esfera
Esfera* cria(double diametro);

// Raio da esfera: r = d / 2
double volume(Esfera* esfera);

// Area da esfera: 4 * pi * raio²
double raio(Esfera* esfera);

// Volume da esfera: (4 * pi * raio³) / 3
double area(Esfera* esfera);