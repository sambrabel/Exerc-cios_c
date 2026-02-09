#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
srand(time(NULL));
int n;

printf("Digite o número de vezes que você quer jogar os dois dados:\n");
scanf("%d",&n);

while(n>0){
int dado1 = (rand() % 6) + 1;
int dado2 = (rand() % 6) + 1;
printf("O dado1 foi %d e o dado2 foi %d\n",dado1,dado2);


if(dado1>dado2){
    printf("Dado1 > Dado2\n");
} else if(dado1==dado2){
    printf("Dado1 = dado2\n");
} else{
printf("Dado1 < Dado2\n");}
n--;
}
return 0;
}