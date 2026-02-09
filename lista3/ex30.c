#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
 int i,n;
 
 printf("Digite o número de dígitos da sequência 1:\n");
 scanf("%d",&n);
 for(i=0;1<=n;i++){
 printf("%d ",i);
 }

 i = 0;
 
 printf("Digite o número de dígitos da sequência 2:\n");
 scanf("%d",&n);

 for(i=0;i<=n;i++){
 printf("%d ",2*n-1);
 }
}