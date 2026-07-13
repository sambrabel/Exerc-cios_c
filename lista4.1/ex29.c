#include <stdio.h>
#include <stdlib.h>
int main(){

    int v[6];
    int i;
    int soma_par = 0;
    int imp = 0;

    for (i=0;i<6;i++){
        printf("Digite o valor do vetor na posição %d:\n",i);
        scanf("%d",&v[i]);

    }
    printf("Os números pares são:\n");
       
    for (i=0;i<6;i++){
        
        if(v[i]%2==0){
            printf("%d ",v[i]);
            soma_par+=v[i];
        } 
    }
    printf("\nA soma dos números pares é: %d\n",soma_par);

    printf("Os números ímpares são: ");

    for (i=0;i<6;i++){
        
        if(v[i]%2!=0){
            printf("%d ",v[i]);
            imp++;
        } 
    }
    printf("\nTotalizando, são %d números ímpares.",imp);
    return 0;

}