#include <stdio.h>
 
int ehVogal(char);
 
int main(){
    /*
     * Beecrowd: 3358 - Surname is not Easy
     *
     * https://www.beecrowd.com.br/judge/en/problems/view/3358
     */

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
    
    return 0;
}

int ehVogal(char letra){
    char vowels[11] = "aeiouAEIOU";
    
    for(int i = 0; vowels[i] > 0; i++){
        if(letra == vowels[i]) return 1;
    }
    
    return 0;
}