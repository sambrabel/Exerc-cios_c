#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][6];
    int i,j;
    float soma = 0;

    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            printf("Digite um valor:\n");
            scanf("%d",&matriz[i][j]);
        }}

    for (i=0;i<3;i++){
        for(j=0;j<6;j+=2){
            soma+=matriz[i][j];
        }
    }
    printf("A soma das colunas ímpares é %.0f\n",soma);

    soma = 0;
    
    for (i=0;i<3;i++){
        for(j=1;j<5;j+=2){
            soma+=matriz[i][j];
        }
    }
    printf("A media da segunda e da quarta coluna é %.0f\n",soma/6);

    for (i=0;i<3;i++){
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            printf("%d ",matriz[i][j]);
          
        }
        printf("\n");
    }
    return 0;
}