#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[20];
int maior,i,n;
int bool = 0;

for(i=0;i<20;i++){
    printf("Digite o valor do vetor para posição %d:\n",i);
    scanf("%d",&vet[i]);
    
}


for(i=0;i<20;i++){
    for(n=0;n<20;n++){
        if (i == n){
            break;
        }
        if (vet[i]==vet[n]){
            bool++;
            break;
        }
    
if (bool==1){
    continue;
}}
    if (!bool){
    printf("%d ",vet[i]);
}
bool = 0;

}

return 0;
}