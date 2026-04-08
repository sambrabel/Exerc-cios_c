#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[10];
int maior,i,n;


for(i=0;i<10;i++){
    printf("Digite o valor do vetor na casa %d:\n",i);
    scanf("%d",&vet[i]);
    
}


for(i=0;i<10;i++){
    for(n=0;n<10;n++){
        if (i == n){
        continue;
        }
        if (vet[i]==vet[n]){
            printf("vet[%d] = vet[%d] = %d\n",i,n,vet[i]);
        }
    }
}

return 0;
}