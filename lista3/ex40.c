#include <stdio.h>  
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
float numero;
float maior = 0.0;
float menor = 1000000;

while(numero>=0){
printf("Digite um número:\n");
scanf("%f",&numero);
if(numero>maior){
maior = numero;
}
if(numero<menor&&numero>0){
menor = numero;
}
}

printf("O maior número digitado foi: %.2f.\n O menor número digitado foi: %.2f.",maior,menor);
return 0;
}