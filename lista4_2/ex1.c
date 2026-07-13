#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int matriz [4][4];
    int i,n;
    int contagem = 0;

    for(i=0;i<4;i++){
        for(n=0;n<4;n++){
            printf("Digite o valor para a matriz na posição %dx%d:\n",i,n);
            scanf("%d",&matriz[i][n]);
            if(matriz[i][n]>10){
                contagem++;
            }
        }
    }

    int lista_maiores[contagem];
    int tamanho = 0;

    for(i=0;i<4;i++){
        for(n=0;n<4;n++){
            if(matriz[i][n]>10){
                lista_maiores[tamanho] = matriz[i][n];
                tamanho ++;
            }
        }
    }

    for (i=0;i<contagem;i++){
        printf("%d ",lista_maiores[i]);
    }
}