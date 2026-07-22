#include <stdio.h>
#include <stdlib.h>

void dobro(int *vetor){
    int i;
    for(i=0;i<5;i++){
        *(vetor+i)=*(vetor+i) *2;
    }
}

int main(){
    int vetor[5];
    int i;

    for(i=0;i<5;i++){
        printf("Digite o valor do vetor na posição %d:\n",i);
        scanf("%d",&vetor[i]);
    }

    dobro(vetor);

    printf("Vetor após a função: ");
    for(i=0;i<5;i++){
        printf("%d ",vetor[i]);
    }
}