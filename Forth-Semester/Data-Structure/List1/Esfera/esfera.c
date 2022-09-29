#include "esfera.h"

const double PI = 3.141593;

Esfera* cria(double diametro){
    Esfera* esfera = (Esfera*) malloc(sizeof(Esfera));
    
    esfera->diametro = diametro;

    return esfera;
}

double raio(Esfera* esfera){
    return esfera->diametro / 2;
}

double area(Esfera* esfera){
    return PI * pow(raio(esfera), 2);
}

double volume(Esfera* esfera){
    return (4.0 * PI * pow(raio(esfera), 3)) / 3.0;
}