#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
int n1 = 0;
int n2 = 1;
int num;

printf("Digite o número de limitação para a sequência de Fibonacci:\n");
scanf("%d",&num);

while(n2>0){
printf("%d ",n1);
if(n1>num){
break;
}
printf("%d ",n2);
if(n2>num){
break;
}
n1 = n1+n2;
n2 = n1+n2;
}
return 0;
}