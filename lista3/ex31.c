#include <stdio.h>
#include <locale.h>
int main(){
   setlocale(LC_ALL,"Portuguese");
   float soma = 1.0 ;
   float num = 2.0;
    float impar = 3.0;

   while(num<100){
      soma += num/impar;
      num++;
      impar += 2; 
   }
   printf("A soma é: %f",soma);
   return 0;
   }
   