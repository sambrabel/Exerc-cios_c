#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[15];
    int i;
    int nulos = 0;

    for(i=0;i<15;i++){
        printf("Digite o valor do vetor na posição %d:\n",i);
        scanf("%d",&vet[i]);
    }
    
    for (i=0;i<15;i++){
        if(vet[i]==0){
            nulos ++;
        }
    }

    int vet_compacto[15-nulos];
    int n = 0;
    for (i=0;i<15;i++){
        if(vet[i]!=0){
            vet_compacto[n] = vet[i];
            n++;
        }
    }

    for (i=0;i<(15-nulos);i++){
        printf("%d",vet_compacto[i]);
    }

}