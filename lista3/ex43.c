#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
int idade,i;
float media = 0;

for(i=1;i>0;i++){
printf("Digite a idade:\n");
scanf("%d",&idade);
if(idade<0){
printf("Idade inválida");
exit(1);
} else if(idade==0){
break;
}
media += idade;}
printf("A média das idades é de %.2f anos.",media/i);
return 0;
}