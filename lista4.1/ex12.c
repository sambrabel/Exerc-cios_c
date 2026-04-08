#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[5];
int maior,i,menor;
int soma = 0;

for(i=0;i<5;i++){
    printf("Digite o valor do vetor na casa %d:\n",i);
    scanf("%d",&vet[i]);
    soma += vet[i];
}
maior = vet[0];
menor = vet[0];

for(i=0;i<5;i++){
    if (vet[i]>=maior){
        maior = vet[i];
    }
    if (vet[i]<=menor){
        menor = vet[i];
    }
}

printf("Valores do vetor:");

for(i=0;i<5;i++){
    printf("%d ",vet[i]);
}
printf("\n O maior valor é %d e o menor é %d e a soma %d",maior,menor,soma/5);
return 0;
}