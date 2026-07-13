#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int lista [99];
    int i,n;

    srand(time(NULL));

    for(i=0;i<99;i++){
        lista[i] = i;
    }
    
    int passagem;

    for(i=0;i<99;i++){
        n = rand() % (i+1);

        passagem = lista[n];
        lista[n] = lista[i];
        lista[i] = passagem;
    }

    int c = 0;
    int bingo[5][5];

    for(i=0;i<5;i++){
        for(n=0;n<5;n++){
            bingo[i][n] = lista[c];
            c++;        
        }
    }

        for(i=0;i<5;i++){
        for(n=0;n<5;n++){
            printf("%d ",bingo[i][n]);
        }
        printf("\n");
    }
}