#include <stdio.h>

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
    
    // Se n é par: brancos e pretos igual a n * (n / 2)
    if(n % 2 == 0){
        brancos = n * (n / 2);
        pretos = brancos;
    }
    
    scanf("%d casas brancas e %d casas pretas\n", brancos, pretos);
}