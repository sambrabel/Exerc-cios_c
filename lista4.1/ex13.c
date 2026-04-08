#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[5];
int maior,i,menor,ma,me;


for(i=0;i<5;i++){
    printf("Digite o valor do vetor na casa %d:\n",i);
    scanf("%d",&vet[i]);
    
}
maior = vet[0];
menor = vet[0];

for(i=0;i<5;i++){
    if (vet[i]>=maior){
        maior = vet[i];
        ma = i;
    }
    if (vet[i]<=menor){
        menor = vet[i];
        me = i;
    }
}

printf("\n O maior valor está na posição %d e o menor em %d",ma,me);
return 0;
}