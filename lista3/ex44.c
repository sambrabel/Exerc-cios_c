#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int n1 = 0;
int n2 = 1;
int num;

printf("Digite o número de referência para a sequência de Fibonacci:\n");
scanf("%d",&num);

do{
printf("%d \n %d \n",n1,n2);
n1 = n1+n2;
n2 = n2+n1;
}while(n1<num&&n2<num);
return 0;
}