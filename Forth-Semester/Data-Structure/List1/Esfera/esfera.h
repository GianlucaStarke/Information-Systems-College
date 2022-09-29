#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double diametro;
}Esfera;

Esfera* cria(double diametro);

double volume(Esfera* esfera);

double raio(Esfera* esfera);

double area(Esfera* esfera);