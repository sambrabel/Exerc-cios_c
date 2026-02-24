#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(){
srand(time(NULL));
setlocale(LC_ALL,"Portuguese");
int aleatorio = (rand()%1000) + 1;
int tentativa;
int c = 1;

for(c=1;c>0;c++){
printf("Que número você acha que foi gerado automaticamente?\n");
scanf("%d",&tentativa);
if(tentativa<aleatorio){
printf("Seu número é menor que o gerado\n");
} else if(tentativa>aleatorio){
printf("Seu número é maior que o gerado\n");
} else if(tentativa==aleatorio){
printf("Você advinhou o número!!\n");
break;}
}
printf("Você teve que tentar %d vezes até acertar.",c);
return 0;

}