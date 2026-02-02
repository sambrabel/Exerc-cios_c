#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
  setlocale(LC_ALL,"Portuguese");

  int dia,mes,ano;

  printf("Digite um dia, um mês e um ano\n");
  scanf("%d %d %d",&dia,&mes,&ano);
   
if (mes == 4 || mes == 6 || mes == 9 || mes == 11 ){

    if (dia>30||dia<1){
printf("Dia inválido.");
exit(1);}

} else if(mes == 1 || mes == 3 || mes == 5 || mes == 8 || mes == 10|| mes == 12){
if(dia>31||dia<1){
printf("Dia inválido.");
exit(1);}
} else if (mes == 2){

if( ano % 100 == 0 && ano % 400 == 0){
if (dia>29||dia<1){
printf("Dia inválido!");
exit(1);}    
} else if(ano % 4 == 0 && ano % 100 != 0){
    if (dia>29||dia<1){
printf("Dia inválido!");
exit(1);} 
} else {
 if(dia>28||dia<1){
    printf("Dia inválido!");
exit(1);
 }}}

 printf("A data %d/%d/%d é válida!",dia,mes,ano);
 return 0;

}