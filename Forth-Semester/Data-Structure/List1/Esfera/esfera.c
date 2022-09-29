#include "esfera.h"

// Constante PI
const double PI = 3.141593;

// Constructor do tipo estruturado Esfera
Esfera* cria(double diametro){
    // Aloca memória
    Esfera* esfera = (Esfera*) malloc(sizeof(Esfera));
    
    esfera->diametro = diametro;

    return esfera;
}

// Raio da esfera: r = d / 2
double raio(Esfera* esfera){
    return esfera->diametro / 2;
}

// Area da esfera: 4 * pi * raio²
double area(Esfera* esfera){
    return 4.0 * PI * pow(raio(esfera), 2);
}

// Volume da esfera: (4 * pi * raio³) / 3
double volume(Esfera* esfera){
    return (4.0 * PI * pow(raio(esfera), 3)) / 3.0;
}