#include <stdio.h>  
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
float n = 0;
float soma = 0;
int qnt = 0;
int p = 0;
float maior = n;
float menor = n;
float pares = 0;

do{
    printf("Digite um número:\n");
    scanf("%f",&n);
    if(n==0){
        printf("Comando finalizado.\n");
        break;
    }
    soma+=n;
    qnt++;
    if(n>maior){
        maior = n;
    }
    if(n<menor){
        menor = n;
    }
    if(n%2==0){
        pares+=n;
        p++;
    }
}while(n!=0);
printf("soma = %.2f, quantidade de números digitados = %d, maior número = %.2f, menor número digitaddo = %.2f\n",soma,qnt,maior,menor);
printf("Média = %.2f, média dos pares = %.2f",soma/qnt,pares/p);

return 0;
}