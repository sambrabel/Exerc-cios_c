#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
 
 int m;

    printf("Digite um número:\n");
    scanf("%d",&m);
    

  while(m>=1){
printf("%d",m);
m--;}
return 0;
}