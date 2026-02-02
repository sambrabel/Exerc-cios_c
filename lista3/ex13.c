#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
 int i = 1;
 int n;

    printf("Digite um número par:\n");
    scanf("%d",&n);
    if(n%2!=0){
    printf("o número não é par!");
    exit(1);}

while(i<=n){
   if (i%2 == 0){
    printf("%d\n",i);
}else{n++;}

i++;}
return 0;
}