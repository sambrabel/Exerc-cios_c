#include <stdio.h>
#include <stdlib.h>

void atribui(int linhas, int colunas, int **matriz){
    int i,j;
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("Qual o valor da matriz na posição [%d][%d]:\n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}

int main(){
    int linhas;
    int colunas;

    printf("Digite o número de linhas da matriz:\n");
    scanf("%d",&linhas);
    printf("Digite o número de colunas da matriz:\n");
    scanf("%d",&colunas);

    int **matriz = (int**) malloc(linhas*sizeof(int*));

    int i,j;
    for(i=0;i<linhas;i++){
         matriz[i] = (int*) malloc(colunas*sizeof(int));
    }

    atribui(linhas,colunas,matriz);

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("%d ",matriz[i][j]);
            
        }
        printf("\n"); 
    }
for(i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;
 
    return 0;

}