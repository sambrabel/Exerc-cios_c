#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[10];
int i;

for (i=0;i<10;i++){
    printf("Digite o valor do vetor %d:\n",i);
    scanf("%d",&vet[i]);
    if(vet[i]<=0){
        vet[i]=0;
    }
}
  for (i=0;i<10;i++){
    printf("%d",vet[i] );}  
return (0);
}