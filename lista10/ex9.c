#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor = (int*) malloc(1*sizeof(int));
    int i=0 ;
    int numero;

    if(vetor==NULL){
        printf("Erro");
        return 1;
    }

    printf("Digite um número:\n");
    scanf("%d",&numero);
    vetor[0] = numero;
    

    while(2){
        printf("Digite um número:\n");
        scanf("%d",&numero);

        if(numero<0){
            break;
        } 
        
        i++;
        vetor = (int*) realloc(vetor,i);
        vetor[i]=numero;
            
    }

    while(i>=0){
        printf("%d ",vetor[i]);
        i--;
    }

    free(vetor);
    vetor == NULL;
    return 0;
}