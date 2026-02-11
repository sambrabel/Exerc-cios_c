#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int maior,menor;
int soma = 0;

printf("Digite um número:\n");
scanf("%d",&maior);
printf("Digite um número menor que o anterior:\n");
scanf("%d",&menor);

if(maior<menor){
printf("Intervalo de valores inválido.");
exit(1);
}

while(menor<=maior){
if(menor%2!=0){
    soma += menor;
    menor += 2;
} else {
menor += 1;}}

printf("A soma dos números ímpares neste intervalo é de: %d",soma);
return 0;
}