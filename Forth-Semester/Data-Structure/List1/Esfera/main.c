#include "esfera.h"

int main(){
    Esfera* esfera;
    double diametro;
    char continuar[2];

    while(1){
        printf("Insira o diâmetro da esfera: ");
        scanf("%lf", &diametro);

        esfera = cria(diametro);

        printf("--------Informações da esfera--------\n");
        printf("Raio: %lf\n", raio(esfera));
        printf("Area: %lf\n", area(esfera));
        printf("Volume: %lf\n\n", volume(esfera));

        printf("Deseja inserir mais uma esfera?(s/n) ");
        scanf("%c", &continuar[0]);

        if(continuar[0] != 's') break;
    }

    return 0;
}