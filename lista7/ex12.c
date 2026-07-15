#include <stdio.h>
#include <stdlib.h>

void soma_algarismos (int n1){
    int soma = 0;

    if( n1 < 0){
        printf("Numero inválido.");
         exit(0);
    } else{
        while(n1>=1){
            soma += n1%10;
            n1 /= 10;
        }
        printf("A soma dos algarismos é %d",soma);
    }

}

int main(){
    int numero;

    printf("Digite um número:\n");
    scanf("%d",&numero);
    soma_algarismos(numero);
}