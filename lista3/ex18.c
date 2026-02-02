#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
int n,maior,i;
int mult = 1;

printf("Digite um numero de leitura maior que 0:\n");
scanf("%d",&i);

if(n<=0){
printf("Número inválido!");
exit(1);
}

printf("Digite um número:\n");
scanf("%d",&n);
maior = n;
i--;
while(i>0){
    printf("Digite um número:\n");
    scanf("%d",&n);
    if(maior<n){
    maior = n;
    } else if(maior==n){
    mult ++;}

    i--;
}

while(mult>0){
printf("%d\n",maior);
mult--;
}

return 0;

}