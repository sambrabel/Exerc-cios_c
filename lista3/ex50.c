#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
float chico = 1.5;
float ze = 1.2;
int tempo = 0;


while(chico>ze){
chico += 0.2;
ze += 0.3;
tempo ++;
}
printf("Vai demorar %d anos para joão chegar ou ultrapassar o valor de Carlos.",tempo);
return 0;

}