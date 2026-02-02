#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
int n = 0;
int par = 0;
int impar = 0;

printf("Digite um número:\n");
scanf("%d",&n);
if (n==1000){

}else if(n%2==0){
par ++;
} else{
impar ++;}

while(n!=1000){
printf("Digite um número:\n");
scanf("%d",&n); 
if(n%2==0){
par ++;
} else{
impar ++;}
}

printf("O número de dados lidos foram:%d\n O número de dados pares eram: %d",par+impar,par);
return 0;


}