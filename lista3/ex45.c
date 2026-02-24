#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
setlocale(LC_ALL,"Portuguese");
float vel;
int o = 1;

while(o==1||o==2){
printf("Você deseja fazer:\nKm/h->M/s(1)\nm/s->Km/h(2)\nSair(3)\n");
scanf("%d",&o);
if(o==1){
printf("Qual a velocidade a ser convertida?\n");
scanf("%f",&vel);
vel = vel/3.6;
printf("%.2f\n",vel);
}else if(o==2){
printf("Qual a velocidade a ser convertida?\n");
scanf("%f",&vel);
vel = vel*3.6;
printf("%.2f\n",vel);
}else if(o==3){
printf("Operação encerrada.");
break;}}
return 0;
}