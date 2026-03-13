#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
float carlos,joao;
int tempo = 0;

printf("Qual o salárop de Carlos?\n");
scanf("%f",&carlos);
joao = carlos/3;

while(carlos>joao){
carlos *= 1.02;
joao *= 1.05;
tempo ++;
}
printf("Vai demorar %d meses para joão chegar ou ultrapassar o valor de Carlos.",tempo);
return 0;

}