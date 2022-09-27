#include <stdio.h>

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

int main(){
    /*
     * Beecrowd: 3068 - Meteoros
     *
     * https://www.beecrowd.com.br/judge/en/problems/view/3068
     */

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
 
    return 0;
}