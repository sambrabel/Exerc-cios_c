#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[5];
int leitura;
int i;

for (i=0;i<5;i++){
    printf("Digite o valor do vetor %d:\n",i);
    scanf("%d",&vet[i]);
}
printf("Digite 0 para acabar com o programa \n Digite 1 para printar o vetor \n Digite 2 para printar o vetor na ordem inversa:\n");
scanf("%d",&leitura);

if(leitura == 0){
    exit(0);
} else if(leitura==1){
    for (i=0;i<5;i++){
    printf("%d",vet[i]);}     
} else if(leitura==2){
    for (i=4;i>=0;i--){
    printf("%d",vet[i]);
}} else {
    printf("Código inválido!");
    exit(1);
}

return (0);
}