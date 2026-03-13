#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int ent;
int n = 0;

printf("Digite um número de entrada positivo:\n");
scanf("%d",&ent);

if(ent<0){
printf("Número inválido!");
exit (1);
}

while(n!=ent){
printf("%d",n);
n++;
}
return 0;
}