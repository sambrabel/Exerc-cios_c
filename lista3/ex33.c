#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

int n,i,j;
int y = 0;
int x = 1;

printf("Digite um número:\n");
scanf("%d",&i);
printf("Digite outro número:\n");
scanf("%d",&j);

printf("Digite o número de múltiplos que deseja obter:\n");
scanf("%d",&n);

printf("Os primeiros %d números divisíveis por %d e %d são: ",n,i,j);

while(y<n){
if(x%i==0){
printf("%d ",x);
y++;
}else if(x%j==0){
printf("%d ",x);
y++;    
}
x++;}

return 0;
}