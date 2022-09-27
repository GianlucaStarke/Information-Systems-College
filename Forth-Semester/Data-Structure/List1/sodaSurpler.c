#include <stdio.h>
 
int main(){
    /*
     * Beecrowd: 3214 - Soda Surpler
     *
     * https://www.beecrowd.com.br/judge/en/problems/view/3214
     */

    int e, f, c, sodas;
    
    scanf("%d %d %d", &e, &f, &c);
    f += e;
    
    for(sodas = 0; f >= c; sodas++){
        f -= c - 1;
    }
    
    printf("%d\n", sodas);
 
    return 0;
}