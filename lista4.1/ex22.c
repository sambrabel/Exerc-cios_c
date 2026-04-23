#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int veta[10];
    int vetb[10];
    int vetc[10];
    int i;
    
    

    for (i=0;i<10;i++){
        printf("Digite um valor para o vetor A na posição %d:\n",i);
        scanf("%d",&veta[i]);
    }

    for (i=0;i<10;i++){
        printf("Digite um valor para o vetor B na posição %d:\n",i);
        scanf("%d",&vetb[i]);
    }
    
    for (i=0;i<10;i++){
        if(i%2==0){
            vetc[i]=veta[i];
        }else{
            vetc[i]=vetb[i];
        }}
    


    for (i=0;i<10;i++){
        printf("%d ",vetc[i] );}

    
    return (0);
}