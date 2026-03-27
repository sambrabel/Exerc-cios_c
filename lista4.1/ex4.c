#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int v[8];
int x;
int y;
int i;

for(i=0;i<8;i++){
    printf("Digite um número:\n");
    scanf("%d",&v[i]);
}

printf("Digite duas posições do vetor:\n");
scanf("%d %d",&x,&y);

printf("%d e %d",v[x],v[y]);
return 0;

}
