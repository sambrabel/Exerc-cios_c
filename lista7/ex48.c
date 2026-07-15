#include <stdio.h>
#include <stdlib.h>

void soma_principal(int matriz[3][3]){
    int i,n;
    int soma = 0;

    for(i=0;i<3;i++){
        for(n=0;n<3;n++){
            if(n>i){
                soma+= matriz[i][n];
            }
        }
    }

    printf("A soma dos valores acima da diagonal principal é de %d.",soma);

}

int main(){
    int matriz[3][3];
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor da matriz na posição %d %d:\n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    soma_principal(matriz);
    return 0;
}