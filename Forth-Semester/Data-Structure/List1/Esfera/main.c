#include "esfera.h"

int main(){
    Esfera esfera;
    double diametro;
    char continuar[2];

    while(1){
        scanf("Insira o diâmetro da esfera: %lf\n\n", &diametro);

        esfera = cria(diametro);

        printf("--------Informações da esfera--------\n");
        printf("Raio: %lf\n", raio(esfera));
        printf("Area: %lf\n", area(esfera));
        printf("Volume: %lf\n\n", volume(esfera));

        scanf("Deseja inserir mais uma esfera?(s/n)\n\n", &continuar[0]);

        if(continuar[0] == 'n') break;
    }

    return 0;
}