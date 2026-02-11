#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    int base,altura;

printf("Qual a altura do triângulo?\n");
scanf("%d",&altura);
if(altura<=0){
printf("Altura inválida!");
exit(1);
}

printf("Qual a base do triângulo?\n");
scanf("%d",&base);
if(base<=0){
printf("Altura inválida!");
exit(1);
}

printf("A área do triângulo é: %d",base*altura/2);
return 0;

}