#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int a,b,c;

for(a=50;a<333;a++){
for(b=333;b<500;b++){
c = 1000-a-b;
if(a*a+b*b==c*c){
printf("O termo Pitagórico é: %d,%d e %d.",a,b,c);
break;  }}
}
return 0;
}