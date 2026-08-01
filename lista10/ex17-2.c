#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam = 10;
    int *vetor = (int*) malloc(tam*sizeof(int));
    int *temporario = (int*) malloc(tam*sizeof(int));
    int contagem = 0;
    int num;

    temporario = NULL;

    printf("digite um número para a sequência:\n");
    scanf("%d",&num);

    int i;
    while(num!=0){
        if(contagem%10==0){
            tam+=10;
            temporario = (int*) malloc(tam*sizeof(int));
            for(i=0;i<contagem;i++){
                temporario[i] = vetor[i];
            }
            free(vetor);
            vetor = NULL;
            vetor = (int*) malloc(tam*sizeof(int));
            for(i=0;i<contagem;i++){
                vetor[i] = temporario[i];
            }
            free(temporario);
            temporario = NULL;
        }
        vetor[contagem] = num;
        printf("Digite um número para a sequência:\n");
        scanf("%d",&num);
        contagem++;
    }
    for(i=0;i<contagem;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}