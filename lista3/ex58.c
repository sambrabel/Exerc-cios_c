#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int n1,n2,i;
int soma = 0;
int v = 0;
printf("Digite o primeiro número limitante:\n");
scanf("%d",&n1);
printf("Digite o segundo número limitante:\n");
scanf("%d",&n2);

if(n1<n2){
    while(n1<=n2){
    for(i=2;i<=sqrt(n1);i++){
        if(n1%i==0){
            v=1;
            break;
        }
    }
    if(!v){
        soma += n1;
    }
    n1++;
    v=0;
}}

if(n1>n2){
    while(n2<=n1){
    for(i=2;i<=sqrt(n2);i++){
        if(n2%i==0){
            v=1;
            break;
        }
    }
    if(!v){
        soma+=n2;
    }
    n2++;
    v=0;
}}

printf("A soma dos números primos entre amobos os números é de %d",soma);
return 0;
}