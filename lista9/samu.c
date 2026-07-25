#include <stdio.h>
#include <stdlib.h>

void dobra_impar(int *vet){
    int i;
    for(i=0;i<5;i++){
        if(vet[i]%2!=0){
            vet[i] = vet[i]*2;
        }
    }
}

int main(){
    int vet[5];
    int i;

    for(i=0;i<5;i++){
        printf("Digite o numero do vetor na posição %d:\n",i);
        scanf("%d",&vet[i]);
    }

    dobra_impar(vet);

    for(i=0;i<5;i++){
        printf("%d ",vet[i]);
    }

    return 0;
}