#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int v[10];
    int i,n;

    for (i=0;i<10;i++){
        printf("Digite o valor do vetor na posição %d:\n",i);
        scanf("%d",&v[i]);
    }
    int x = 0;
    int y=0;
    for (i=0;i<10;i++){
        for(n=2;n<=sqrt(v[i]);n++){
            if(v[i]%n==0){
                x=1;
            }
        }
        if (x==1){
            x=0;
        }else{
            printf("%d ",v[i]);
        }
    }
}