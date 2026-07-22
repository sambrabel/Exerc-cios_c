#include <stdio.h>
#include <stdlib.h>

int main(){
    float matriz[3][3];
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor da matriz na posição %d %d:\n",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%p ",&matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}