#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int v[6];
int i;

for(i=0;i<6;i++){
    printf("Digite um número:\n");
    scanf("%d",&v[i]);
}
for(i=0;i<6;i++){
    printf("%d ",v[i]);
}
return 0;
}