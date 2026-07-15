#include <stdio.h>

void verifica_sinal (float val1){
    if(val1*(-1)<0){
        printf("O número é positivo");
    } else{
        printf("O número é negativo");
    }
}
int main(){
    float numero;

    printf("Digite um número:\n");
    scanf("%f",&numero);
    verifica_sinal(numero);
    return 0;
}