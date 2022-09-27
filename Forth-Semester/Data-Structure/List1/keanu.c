#include <stdio.h>
#include <math.h>

int main(){
    /*
     * Beecrowd: 3342 – Keanu
     *
     * https://www.beecrowd.com.br/judge/en/problems/view/3342
     */

    int n, brancos, pretos;
    
    scanf("%d", &n);
    
    brancos = ceil(n * (n / 2.0));
    pretos = floor(n * (n / 2.0));
    
    printf("%d casas brancas e %d casas pretas\n", brancos, pretos);
 
    return 0;
}