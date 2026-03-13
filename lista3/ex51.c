#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
float si = 2000;
float aumento = 2000*1.015;
int tempo;

aumento = aumento - si;
printf("Em que ano estamos?\n");
scanf("%d",&tempo);
tempo = tempo - 1995;

while(tempo>0){
aumento *= 2;
si+=aumento;
tempo--;
}
printf("O salário atual é de %.2f reais.",si);
}