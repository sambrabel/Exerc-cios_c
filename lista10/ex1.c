#include <stdio.h>
#include <stdlib.h>
int main(){
    int *vetor = (int*) malloc(5*sizeof(int));
    int i;

    if(vetor == NULL){
        printf("erro de compulação");
        exit(1);
    }
    for(i=0;i<5;i++){
        printf("Digite o vetor da posição %d:\n",i);
        scanf("%d",&vetor[i]);
    }

    for(i=0;i<5;i++){
        printf("O vetor[%d] = %d\n",i,vetor[i]);
    }

    free (vetor);
    vetor = NULL;
    return 0;
}