#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int vet[6] = {1,0,5,-2,-5,7};
int soma = vet[0]+vet[1]+vet[5];
int i;
printf("%d\n",soma);

vet[4] = 100;

for(i=0;i<6;i++){
    printf("%d\n",vet[i]);
}
return 0;
}