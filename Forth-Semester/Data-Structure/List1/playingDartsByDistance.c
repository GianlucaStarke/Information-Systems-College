#include <stdio.h>
 
int main(){
    /*
     * Beecrowd: 3037 - Playing Darts by Distance
     *
     * https://www.beecrowd.com.br/judge/en/problems/view/3037
     */

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
 
    return 0;
}