#include <stdio.h>
#include <stdlib.h>

int fib(int num){
    if (num==0){
        return 0;
    }
    if(num==1){
        return 1;
    }

    return fib(num-1)+fib(num-2);
}

int main(){
    int numero;

    printf("Digite um número:\n");
    scanf("%d",&numero);

    int printar = fib(numero);

    printf("%d",printar);
    return 0;
}