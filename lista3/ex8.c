#include <stdio.h>
#include <locale.h>
int main(){

setlocale(LC_ALL,"Portuguese");
 
   float a = 0;
   float maior,menor;
   int i;
   
   printf("Digite um número:\n");
   scanf("%f",&a);
   maior = a;
   maior = a;

   for (i=0;i<10;i++){
   printf("Digite um número:\n");
   scanf("%f",&a);
   if(a>maior){
   maior = a;
   } else if(a<menor){
   menor = a;
   }
   }
   printf("O maior número é o %f e o menor %f",maior,menor);
   return 0;

}