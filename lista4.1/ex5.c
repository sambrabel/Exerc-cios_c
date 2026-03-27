#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int v[10];
int i;
int par=0;
for(i=0;i<8;i++){
    printf("Digite um número:\n");
    scanf("%d",&v[i]);
}

printf("Os números pares são:\n");

for(i=0;i<8;i++){
    if(v[i]%2==0){
        printf("%d ",v[i]);
        par++;
    }    
}

printf("\nSendo %d no total.",par);

return 0;

}
