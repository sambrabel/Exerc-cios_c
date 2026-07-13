#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[10];
    int i;
    int par = 0;
    int imp = 0;

    for (i=0;i<10;i++){
        printf("Digite o valor do vetor na posição %d:\n",i);
        scanf("%d",&v[i]);
        if(v[i]%2==0){
            par++;
        } else{
            imp++;
        }
    }
    int v_par[par];
    int v_imp[imp];
    
    par = 0;
    imp = 0;

    for (i=0;i<10;i++){
        if(v[i]%2==0){
            v_par[par] = v[i];
            par++;
        } else{
            v_imp[imp] = v[i];
            imp++;
        }
    }
    printf("Os vetores pares são: ");
    for (i=0;i<par;i++){
        printf("%d ",v_par[i]);
        
    }
    printf("\n");
    printf("Os vetores ímpares são: ");

    for (i=0;i < imp;i++){
        printf("%d ",v_imp[i]);
    
    }
}