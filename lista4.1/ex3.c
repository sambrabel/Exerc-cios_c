#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int v[10];
int u[10];
int i;

for(i=0;i<10;i++){
    printf("Digite um número:\n");
    scanf("%d",&v[i]);
    u[i]= pow(v[i],2); 
}

for(i=0;i<10;i++){
    printf("%d - %d\n",v[i],u[i]);
}

return 0;
}