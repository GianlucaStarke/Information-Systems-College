#include <stdio.h>
#include <math.h>

char keanu();

int main(){

    keanu();

    return 0
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
void meteoros(){
    
}