#include "esfera.h"

int main(){
    Esfera* esfera;
    double diametro;
    char continuar = 's';

    while(continuar == 's'){
        printf("Insira o diâmetro da esfera: ");
        scanf("%lf", &diametro);
        
        printf("\n");

        esfera = cria(diametro);

        printf("-----------------------\n");
        printf("-Informações da esfera-\n");
        printf("-----------------------\n");
        printf("Raio:   %.2lf\n", raio(esfera));
        printf("Area:   %.2lf\n", area(esfera));
        printf("Volume: %.2lf\n\n", volume(esfera));

        printf("Deseja inserir mais uma esfera?(s/n) ");
        scanf(" %c", &continuar);
        
        printf("\n");
    }

    return 0;
}