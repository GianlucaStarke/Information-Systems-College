#include <stdio.h>
#include <math.h>

int playingDartsByDistance();
int keanu();
int meteoros();
int sodaSurpler();
int surnameIsNotEasy();

// Meteoros----------------
typedef struct{
    int x1;
    int x2;
    int y1;
    int y2;
}Fazenda;

typedef struct{
    int x;
    int y;
}Meteoro;
// ------------------------

// surnameIsNotEasy--------
int ehVogal(char);
// ------------------------

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

    return 0;
}

/*
 * Beecrowd: 3037 - Playing Darts by Distance
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3037
 */
int playingDartsByDistance(){
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
        
        printf("%s\n", joao > maria ? "JOAO" : maria > joao ? "MARIA" : "EMPATE");
    }
    
    return 1;
}

/*
 * Beecrowd: 3342 – Keanu
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3342
 */
int keanu(){
    int n, brancos, pretos;
    
    scanf("%d", &n);
    
    brancos = ceil(n * (n / 2.0));
    pretos = floor(n * (n / 2.0));
    
    printf("%d casas brancas e %d casas pretas\n", brancos, pretos);
    
    return 1;
}

/*
 * Beecrowd: 3068 - Meteoros
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3068
 */
int meteoros(){
    Fazenda fazenda;
    Meteoro meteoro;
    int qtd_meteoros_fazenda;
    int qtd_meteoros;
    
    for(int count = 1; 1; count++){
        scanf("%d %d %d %d", &fazenda.x1, &fazenda.y1, &fazenda.x2, &fazenda.y2);
        
        if(fazenda.x1 == 0 && fazenda.x2 == 0 && fazenda.y1 == 0 && fazenda.y2 == 0) break;
        
        scanf("%d", &qtd_meteoros);
        
        qtd_meteoros_fazenda = 0;
        
        for(int i = 0; i < qtd_meteoros; i++){
            scanf("%d %d", &meteoro.x, &meteoro.y);
            qtd_meteoros_fazenda += 
                fazenda.x1 <= meteoro.x && meteoro.x <= fazenda.x2
                && fazenda.y1 >= meteoro.y && meteoro.y >= fazenda.y2
                ? 1
                : 0
            ;
        }
        
        printf("Teste %d\n%d\n", count, qtd_meteoros_fazenda);
    };
    
    return 1;
}

/*
 * Beecrowd: 3214 - Soda Surpler
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3214
 */
int sodaSurpler(){
    int e, f, c, sodas;
    
    scanf("%d %d %d", &e, &f, &c);
    f += e;
    
    for(sodas = 0; f >= c; sodas++){
        f -= c - 1;
    }
    
    printf("%d\n", sodas);
 
    return 1;
}

/*
 * Beecrowd: 3358 - Surname is not Easy
 *
 * https://www.beecrowd.com.br/judge/en/problems/view/3358
 */
int surnameIsNotEasy(){
    int qtd_nomes, dificil, consoantes_seguidas;
    char nome[43];
    
    scanf("%d", &qtd_nomes);
    
    for(int i = 0; i < qtd_nomes; i++){
        scanf("%s", nome);
        
        consoantes_seguidas = 0;
        dificil = 0;
        
        for(int i = 0; nome[i] > 0; i++){
            consoantes_seguidas = !ehVogal(nome[i]) ? consoantes_seguidas + 1 : 0;
            if(consoantes_seguidas > 2){
                dificil = 1;
                break;
            }
        }
        
        printf("%s %s facil\n", nome, dificil ? "nao eh" : "eh");
    }
    
    return 1;
}

int ehVogal(char letra){
    char vowels[11] = "aeiouAEIOU";
    
    for(int i = 0; vowels[i] > 0; i++){
        if(letra == vowels[i]) return 1;
    }
    
    return 0;
}