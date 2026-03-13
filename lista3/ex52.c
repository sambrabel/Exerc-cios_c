#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
float retirada;
int cem = 0;
int cin = 0;
int vin = 0;
int dez = 0; 
int c = 0;
int dois = 0;
int um = 0;

printf("Digite o valor que será sacado:\n");
scanf("%f",&retirada);
while(retirada>=100){
retirada - 100;
cem ++;
}
while(retirada>=50){
retirada - 50;
cin ++;
}
while(retirada>=20){
retirada - 20;
vin ++;
}
while(retirada>=10){
retirada - 10;
dez ++;
}
while(retirada>=5){
retirada - 5;
c ++;
}
while(retirada>2){
retirada - 2;
dois ++;
}
while(retirada>=0){
retirada - 1;
um ++;
}
printf("A retirada será feita com %d notas de 100, %d notas de 50, %d notas de 20, %d notas de 10, %d notas de 5, %d notas de 2 e %d moedas de 1.",cem,cin,vin,dez,c,dois,um);
}