#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int a,b,i,j;

for(i=1000;i<10000;i++){
a = i%100;
j = i/100;
b = j%100;
if ((a*a)+(b*b)==i){
printf("%d ",i);}}

return 0;
}