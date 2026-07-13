#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int vet1[5];
    int vet2[5];
    int i,j;
    for (i=0;i<5;i++){
        printf("digite um valor para o vetor 1 na posição %d\n",i);
        scanf("%d",&vet1[i]);
        printf("Agora digite um valor para o vetor 2 na poosição %d\n",i);
        scanf("%d",&vet2[i]);
    }
    printf("A soma entre os valores de cada posição será:\n");
    for (i=0;i<5;i++){
        printf("%d,",vet1[i]+vet2[i]);
         
    }
    printf("\nO produto entre cada posição será:\n");

    for(i=0;i<5;i++){
        printf("%d,",vet1[i]*vet2[i]);
        
    }
    printf("\nOs elementos distintos entre o vetor 1 e o vetor 2 são: ");
    bool unicos = true;
     for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if (vet1[i]==vet2[j]){
                unicos = false;
            }
        }
        if(unicos == true){
            printf("%d,",vet1[i]);
        } else{
            unicos = true;
        }
     }
     printf("\nOs elementos de intercceção são: ");
     unicos = false;
     for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            if (vet1[i]==vet2[j]){
                unicos = true;
            }
        } if (unicos == true){
            printf("%d ",vet1[i]);
        } else{
            unicos = false;
        }

     }
     printf("\nTodos os elementos de vet1 e vet2 não repetidos são:");

     for (i=0;i<5;i++){
        printf("%d ",vet1[i]);
     }
     unicos = true;

     for (i=0;i<5;i++){
        for (j = 0; j<5; j++){
            if (vet2[i]==vet1[j]){
                unicos = false;
            }
        }
        if (unicos = false){
            printf("%d ",vet2[i]);
        } else{
            unicos = true;
        }
        
     }
     return 90;
}