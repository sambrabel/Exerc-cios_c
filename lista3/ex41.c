#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
float r,r1,r2,i;

printf("Digite o valor de R1:\n");
scanf("%f",&r1);
printf("Digite o valor de R2:\n");
scanf("%f",&r2);
r = (r1*r2)/(r1+r2);

for(i=3;i>0;i++){
printf("Digite o valor de R%.0f\n",i);
scanf("%f",&r1);
if(r1==0){
break;
}
r = (r*r1)/(r+r1);
}

printf("O valor final da resistência é: %.2f",r);
return 0;
}