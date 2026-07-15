#include <stdio.h>
#include <stdlib.h>

void fatorial (int num){
    int fat = 1;
    while(num>0){
        fat *= num;
        num--;
    }
    printf("O fatorial do número é %d",fat);
}

int main(){
    int numero;

    printf("Digite um número:\n");
    scanf("%d",&numero);

    fatorial(numero);
}