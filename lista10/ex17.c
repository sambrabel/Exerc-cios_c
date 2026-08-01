#include <stdio.h>
#include <stdlib.h>

int main(){
    int contagem = 0;
    
    int tam = 10;
    int *vetor = (int*) malloc(tam*sizeof(int));
    int *vetor2 = (int*) malloc(tam*sizeof(int));
    int num;

    free(vetor2);
    vetor2 = NULL;

    if (vetor == NULL){
        printf("Erro");
        exit(1);
    }

    printf("Digite um número para a lista:\n");
    scanf("%d",&num);

    int i;

    while(num!=0){

        if(contagem!=0 && contagem%10==0 && contagem%4!=0){
            tam+=10;
            vetor2 = (int*) malloc(tam*sizeof(int));
            for(i=0;i<contagem;i++){
                vetor2[i] = vetor[i];
            }
            free(vetor);
            vetor = NULL;   
        }

        if(contagem!=0 && contagem%10==0 && contagem%4==0){
            tam+=10;
            vetor = (int*) malloc(tam*sizeof(int));
            for(i=0;i<contagem;i++){
                vetor[i] = vetor2[i];
            }
            free(vetor2);
            vetor2 = NULL;
        }

        if(vetor2==NULL){
            vetor[contagem] = num;
        }
        if(vetor==NULL){
            vetor2[contagem] = num;
        }


        contagem++;
        printf("Digite um número:\n");
        scanf("%d",&num);

}
    if(vetor==NULL){
        for(i=0;i<contagem;i++){
            printf("%d ",vetor2[i] );
        }
        free(vetor2);
    } else{
        for(i=0;i<contagem;i++){
            printf("%d ",vetor[i]);
        }
        free(vetor);
    }

    return 0;
}