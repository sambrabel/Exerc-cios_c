#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");

int ano;
float salario;

printf("Digite a quantos anos você trabalha e seu salário atual:\n");
scanf("%d %f",&ano,&salario);

if(salario>2000){
printf("Sem reajuste.\n");
} else if(salario>1500){
salario = salario*1.1;
printf("Aumentos de 10%% no salário, totalizando %.2f reais.\n",salario);
}else if(salario>1000){
salario = salario*1.15;
printf("Aumentos de 15%% no salário, totalizando %.2f reais.\n",salario);
}else if(salario>500){
salario = salario*1.2;
printf("Aumentos de 20%% no salário, totalizando %.2f reais.\n",salario);
}else if(salario<=500){
salario = salario*1.25;
printf("Aumentos de 25%% no salário, totalizando %.2f reais.\n",salario);
}

if(ano>10){
printf("Bônus de 500 reais");
} else if(ano>=7){
printf("Bônus de 300 reais");
} else if(ano>=6){
printf("Bônus de 200 reais");
} else if(ano>=3){
printf("Bônus de 100 reais");
} else if(ano<1){
printf("Sem bônus.");
}
return 0; 
}