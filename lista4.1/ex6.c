#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[10];
int i,maior,menor;

for (i=0;i<10;i++){
    printf("Digite um valo para a posição %d do vetor:\n",i);
    scanf("%d",&vet[i]);
}
maior = vet[0];
menor = vet[0];

for (i=0;i<10;i++){
    if(vet[i] < menor){
        menor = vet[i];
    }
    if(vet[i]>maior){
        maior = vet[i];
    }
}
printf("%d e %d",maior,menor);
return 0;
}