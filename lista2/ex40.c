#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");

float custo;

printf("Qual o custo de produção de carro?\n");
scanf("%f",&custo);



if(custo>25000){
printf("O carro custará %.2f reais.",custo*1.38);
} else if(custo>12000){
printf("O carro custará %.2f reais.",custo*1.265);
} else if(custo<12000){
printf("O carro custará %.2f reais.",custo*1.05);
}
return 0; 

}