#include <stdio.h>
#include <stdlib.h>

int fatorial (int num){
     if (num<0){
        printf("Número inválido");
        exit (1);
     }

     if (num == 0 || num == 1){
        return 1;
     }

     return num * fatorial(num-1);
}


int main(){
    int num;

    printf("Digite um número para receber seu fatorial:\n");
    scanf("%d",&num);

    num = fatorial(num);
    printf("O fatorial é %d",num);
    return 0;
}