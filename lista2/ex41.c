#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");

float peso,altura,imc;

printf("Digite seu peso e sua altura:\n");
scanf("%f %f",&peso,&altura);

imc = peso/(altura*altura);

if(imc>=40){
printf("Obesidade grau 3.");
} else if(imc>35){
printf("Obesidade grau 2");
}else if(imc>30){
printf("Obesidade grau 1");
}else if(imc>25){
printf("Peso em excesso");
}else if(imc>18.6){
printf("Saudável");
}else if(imc<18.5){
printf("Abaixo do peso");
}
return 0; 

}