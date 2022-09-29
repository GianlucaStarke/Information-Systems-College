#include "esfera.h"

int main(){
    // Esfera
    Esfera* esfera;
    // Diametro para atribuir a esfera
    double diametro;
    // Variavel que controla o loop
    char continuar = 's';

    while(continuar == 's'){
        printf("Insira o diâmetro da esfera: ");
        scanf("%lf", &diametro);
        
        printf("\n");

        // Cria esfera
        esfera = cria(diametro);

        // Imprime o raio, a area e o volume da esfera
        printf("-----------------------\n");
        printf("-Informações da esfera-\n");
        printf("-----------------------\n");
        printf("Raio:   %.2lf\n", raio(esfera));
        printf("Area:   %.2lf\n", area(esfera));
        printf("Volume: %.2lf\n\n", volume(esfera));

        // Digite s para calcular mais uma esfera
        printf("Deseja inserir mais uma esfera?(s/n) ");
        scanf(" %c", &continuar);
        
        printf("\n");
    }

    return 0;
}