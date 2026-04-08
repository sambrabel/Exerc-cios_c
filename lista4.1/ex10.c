#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[15];
int i;
int soma = 0;

for (i=0;i<15;i++){
    printf("Digite um valor para a posição %d do vetor:\n",i);
    scanf("%d",&vet[i]);
    soma += vet[i];
}
printf("A média dos alunos é %d",soma/15);
return 0;
}