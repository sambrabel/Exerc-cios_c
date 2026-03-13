#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
float r1,r2;
float r = 1;

while(r>0){
printf("Digite o valor de R1:\n");
scanf("%f",&r1);
printf("Digite o valor de R2:\n");
scanf("%f",&r2);
r = (r1*r2)/(r1+r2);
printf("Resistência equivalente é igual a %.2f Ohms\n",r);
}
return 0;
}