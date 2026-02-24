#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main(){
float num = 1;

printf("Digite um número:\n");
scanf("%f",&num);

while(num>0){
printf("Quadrado: %.2f.\nCubo: %.2f.\nRaiz quadrada: %.2f.\n",num*num,num*num*num,sqrt(num));
printf("Digite um número:\n");
scanf("%f",&num);
} printf("Fim da operação");
return 0;
}