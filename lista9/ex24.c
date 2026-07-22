#include <stdio.h>
#include <stdlib.h>

void armazenamento (int *a, int *b,int vet[], int i){
    int j;
    int maior = vet[0];
    int menor = vet[0];
    for(j=0;j<i;j++){
        if(vet[j]<=menor){
            menor = vet[j];
        }
        if(vet[j]>=maior){
            maior = vet[j];
        }
    }
    *a = maior;
    *b = menor;
}

int main(){
    int i,j;
    int var1,var2;

    printf("Digite o tamanho do seu vetor:\n");
    scanf("%d",&i);

    int vetor[i];

    for(j=0;j<i;j++){
        printf("Digitem o valor do vetor na posição %d:\n",j);
        scanf("%d",&vetor[j]);
    }

    armazenamento(&var1,&var2,vetor,i);

    printf("O maior valor é %d e o menos %d",var1,var2);

    return 0;

}