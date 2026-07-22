#include <stdio.h>
#include <stdlib.h>

void crescente (int n){
    if (n<0){
        return;
    }
    crescente(n-1);
    printf("%d ",n);
}

void decrescente (int n){
    if(n<0){
        return ;

    }

    printf("%d ",n);
    decrescente(n-1);
}

int main(){
    int numero_ref;

    printf("Digite um número:\n");
    scanf("%d",&numero_ref);

    crescente(numero_ref);
    printf("\n");
    decrescente(numero_ref);
    return 0;
}