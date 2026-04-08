#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[10];
int i;
int negativo = 0;
int soma = 0;

for (i=0;i<10;i++){
    printf("Digite um valor para a posição %d do vetor:\n",i);
    scanf("%d",&vet[i]);
    if (vet[i]>=0){
        soma += vet[i];
    }else{
        negativo ++;
    }
}
printf("São %d números negativos e a soma dos positivos é de %d",negativo,soma);
return 0;
}