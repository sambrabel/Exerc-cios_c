#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
int idade;
float soma = 0.0;
int n = 0;

printf("Digite a idade do indivíduo (Digite 0 para para)\n");
scanf("%d",&idade);

while(idade>0){
soma+=idade;
n++;
printf("Digite a idade do indivíduo (Digite 0 para para)\n");
scanf("%d",&idade);
}
printf("A média das idades é: %.2f anos.",soma/n);
return 0;
}