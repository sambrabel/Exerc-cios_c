#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[10];
int i,x;

for (i=0;i<10;i++){
    printf("Digite o valor do vetor %d:\n",i);
    scanf("%d",&vet[i]);
    
}
printf("Digite um valor x:\n");
scanf("%d",&x);

  for (i=0;i<10;i++){
    if(x%vet[i]==0){
    printf("%d",vet[i] );}}  
return (0);
}