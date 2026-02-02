#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
int rest, n,i;

printf("Digite um número entre 100 e 999:\n");
scanf("%d",&n);

if(n<100||n>999){
printf("Número inválido!");
exit(1);
}
for(i=3;i>0;i--){
rest = n%10;
printf("%d\n",rest);
n = n/10;
}
return 0;
}