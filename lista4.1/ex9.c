#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[10];
int i;

for (i=0;i<10;i++){
    printf("Digite um valor par para a posição %d do vetor:\n",i);
    scanf("%d",&vet[i]);
    while(vet[i]%2!=0){
        printf("Digite um valo par:");
        scanf("%d",&vet[i]);
    }
}

for (i=9;i>=0;i--){
    printf("%d,",vet[i]);
}

return 0;
}