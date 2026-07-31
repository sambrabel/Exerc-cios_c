#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho,i;

    printf("Digite o tamanho do vetor a ser lido:\n");
    scanf("%d",&tamanho);

    int *vetor = (int*) malloc(tamanho*sizeof(int));

    if(vetor==  NULL){
        printf("Erro de compilação");
        exit(1);
    }

    for(i=0;i<tamanho;i++){
        printf("Digite o vetor da posição %d:\n",i);
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<tamanho;i++){
        printf("O vetor[%d] = %d\n",i,vetor[i]);
    }

    free(vetor);
    vetor = NULL;
    return 0;
}