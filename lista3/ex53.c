#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int ent,n;
int i = 1;
int j = 1;

printf("Digite o número de linhas do triângulo de Floyd:\n");
scanf("%d",&ent);

for(n=1;n<=ent;n++){
while(i<=n){
printf("%d ",j);
i++;
j++;
}
i = 1;
printf("\n");
}
return 0;
}