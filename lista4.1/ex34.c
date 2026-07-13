#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int vet[10];
    int i,n;
    bool unico = true;
    int escolha;

    for (i=0;i<10;i++){
        printf("Digitie o valor do vetor na posição %d:\n",i);
        scanf("%d",&escolha);

        for (n=0;n<10;n++){
            if (escolha == vet[n]){
                unico = false;
            }}
            if(unico == true){
                vet[i] = escolha;
            } else{
                printf("Este número está repetido\n");
                i--;
                unico = true;
            }
    }

    for (i=0;i<10;i++){
        printf("%d ",vet[i]);
    }
    return 0;
}