#include <stdio.h>
#include <stdlib.h>

void par_impar (int vetor[],int tam){
    int par = 0;
    int impar = 0;
    int i;
    
    for(i=0;i<tam;i++){
        if(vetor[i]%2==0){
            par++;
        } else{
            impar ++;
        }
    }
    printf("São %d números pares e %d ímpares.",par,impar);
}

int main(){
    int tam;
    int i;

    printf("Digite o número de valores que você deseja analisar:\n");
    scanf("%d",&tam);

    int vetor[tam];

    for(i=0;i<tam;i++){
        printf("Digite o valor %d:\n",i+1);
        scanf("%d",&vetor[i]);
    }

    par_impar(vetor[],tam);
    return 0;
}