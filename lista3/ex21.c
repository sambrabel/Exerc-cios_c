#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
int n1,n2,coringa;
int par = 0;
int impar = 1;

printf("Digite dois números:\n");
scanf("%d %d",&n1,&n2);
if(n1>n2){
coringa = n1;
n1 = n2;
n2 = coringa;
}

while(n1!=n2+1){
if(n1%2==0){
par += n1;
} else {
impar*=n1;}
n1++;
}
printf("A soma dos pares neste intervalo é: %d.\n A multiplicação dos ímpares neste intervalo é: %d.",par,impar);
return 0;


}