#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int ent,n;
int v = 0;

printf("Digite um número maior que 1:\n");
scanf("%d",&ent);

if(ent<=1){
printf("Número inválido.");
exit(1);
}

if(ent%2==0){
v = 1;
} else{
for(n=3;n<8;n+=2){
if(ent%n==0 && n!= ent){
v = 1;
break;}}
}

if(!v){
printf("O número de entrada é primo");
} else{
printf("O número não é primo");
}
return 0;
}