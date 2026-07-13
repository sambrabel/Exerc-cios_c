#include <stdio.h>
#include <stdlib.h>
int main(){
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3] = {0};

    int i,j,k;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite um valor para matriz 1 posição %d %d:\n",i,j);{
            scanf("%d",&mat1[i][j]);
            }
        }
    }


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite um valor para matriz 2 posição %d %d:\n",i,j);{
            scanf("%d",&mat2[i][j]);
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                mat3[i][j] += mat1[i][k]*mat2[k][j];
                
            }
        }
    }

        for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",mat3[i][j]);
            
        }
        printf("\n");
    }
}