#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n,i;

    printf("Digite um número ímpar:\n");
    scanf("%d",&n);

    if(n%2==0){
    printf("Esse número é par!");
    exit(1);}

    while(n>=1){
    if(n%2!=0){
    printf("%d\n",n);}
    n--;
    }
return 0;
}