#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
    float valor;

printf("Digite o valor da venda:\n");
scanf("%f",&valor);

if(valor>=100000){
printf("O valor da sua comissão é de: %.2f reais.",700 + 0.16*valor);
} else if(valor>=80000.0){
printf("O valor da sua comissão é de: %.2f reais.",650 + 0.14*valor);
} else if(valor>=60000.0){
printf("O valor da sua comissão é de: %.2f reais.",600 + 0.14*valor);
}  else if(valor>=40000.0){
printf("O valor da sua comissão é de: %.2f reais.",550 + 0.14*valor);
} else if(valor>=20000.0){
printf("O valor da sua comissão é de: %.2f reais.",500 + 0.14*valor);
} else if(valor<20000.0){
printf("O valor da sua comissão é de: %.2f reais.",400 + 0.14*valor);
}
return 0;
}