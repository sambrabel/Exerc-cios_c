#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int n,i;
int v = 0;
long long int soma = 17;//somamos 17 para considerar o 2,3,5,7

for(n=3;n<2000000;n+=2){
if (n%7!=0 && n%3!=0 && n%5!=0){
    for(i=3;i<=sqrt(n);i++){
    if(n%i==0){
    v = 1;
    }
    }
    if(!v){
    soma+=n;
    }
}
v = 0;
}
printf("O valor da soma é: %lld",soma);
return 0;
}