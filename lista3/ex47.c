#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int ope,n1,n2;
float cal;
printf("Quais são os dois números que serão utilizados na operação?\n");
scanf("%d %d",&n1,&n2);
printf("Qual a operação a ser feita?\nSoma(1)\nSubtração(2)\nMultiplicação(3)\nDivisão(4)\nSaída(5)\n");
scanf("%d",&ope);
while(ope!=5){
if(ope==1){
cal = n1+n2;
printf("A soma é: %.0f\n",cal);
}else if(ope==2){
cal = n1-n2;
printf("A subtração é: %f\n",cal);
} else if(ope==3){
cal = (float)n1*n2;
printf("A multipircação é: %.2f\n",cal);
} else if(ope == 4){
cal = (float)n1/n2;
printf("A divisão é: %.2f\n",cal);
} else{
break;
}
printf("Quais são os dois números que serão utilizados na operação?\n");
scanf("%d %d",&n1,&n2);
printf("Qual a operação a ser feita?\nSoma(1)\nSubtração(2)\nMultiplicação(3)\nDivisão(4)\nSaída(5)\n");
scanf("%d",&ope);
}
return 0;
}