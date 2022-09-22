#include <stdio.h>
#include <math.h>

void playingDartsByDistance();
void keanu();
void meteoros();
void sodaSurpler();
void surnameIsNotEasy();

int main(){

    printf("------------------------\n");
    printf("-playingDartsByDistance-\n");
    printf("------------------------\n\n");

    playingDartsByDistance();
    
    printf("------------------------\n");
    printf("-keanu------------------\n");
    printf("------------------------\n\n");

    keanu();

    printf("------------------------\n");
    printf("-meteoros---------------\n");
    printf("------------------------\n\n");
    
    meteoros();
    
    printf("------------------------\n");
    printf("-sodaSurpler------------\n");
    printf("------------------------\n\n");

    sodaSurpler();

    printf("------------------------\n");
    printf("-surnameIsNotEasy-------\n");
    printf("------------------------\n\n");

    surnameIsNotEasy();

    return 0
}

/*
 * Beecrowd: 3037 - Playing Darts by Distance
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3037
 */
void playingDartsByDistance(){
    int n, x, d, maria, joao;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        maria = 0;
        joao = 0;
        
        for(int i = 0; i < 3; i++){
            scanf("%d %d", &x, &d);
            joao += x * d;
        }
        
        for(int i = 0; i < 3; i++){
            scanf("%d %d", &x, &d);
            maria += x * d;
        }
        
        printf("%s\n", joao > maria ? "JOAO" : "MARIA");
    }
}

/*
 * Beecrowd: 3342 – Keanu
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3342
 */
void keanu(){
    int n, brancos, pretos;
    
    scanf("%d", &n);
    
    brancos = ceil(n * (n / 2.0));
    pretos = floor(n * (n / 2.0));
    
    printf("%d casas brancas e %d casas pretas\n", brancos, pretos);
}

/*
 * Beecrowd: 3068 - Meteoros
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3068
 */
void meteoros(){}

/*
 * Beecrowd: 3214 - Soda Surpler
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3214
 */
void sodaSurpler(){}

/*
 * Beecrowd: 3358 - Surname is not Easy
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3358
 */
void surnameIsNotEasy(){}