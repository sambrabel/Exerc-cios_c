#include <stdio.h>
#include <locale.h>
int main(){

setlocale(LC_ALL,"Portuguese");
 
   float a;
   float b = 0;
   int i;
   
   for (i=1;i<=10;i++){
   printf("Digite um número:\n");
   scanf("%f",&a);
   b+=a;
   }
   printf("A média dos números é: %f",b/10);
   return 0;

}