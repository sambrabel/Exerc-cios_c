#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int veta[5];
    int vetb[5];
    int i;
    
    

    for (i=0;i<5;i++){
        printf("Digite um valor para o vetor A na posição %d:\n",i);
        scanf("%d",&veta[i]);
    }

    for (i=0;i<5;i++){
        printf("Digite um valor para o vetor B na posição %d:\n",i);
        scanf("%d",&vetb[i]);
    }
    
    int pe = 0;

    for (i=0;i<5;i++){
        pe += veta[i]*vetb[i];
        }
    


    printf("%d ",pe );

    
    return (0);
}