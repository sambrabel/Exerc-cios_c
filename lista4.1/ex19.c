#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
int vet[50];
int i,x;

for (i=0;i<50;i++){
    vet[i] = (i+5*i)%(i+1);
    
}


for (i=0;i<50;i++){
    printf("%d ",vet[i] );}  
return (0);
}