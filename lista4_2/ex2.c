#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[5][5];
    int i,n;

    for(i=0;i<5;i++){
        for(n=0;n<5;n++){
            if(i==n){
                matriz[i][n] = 1;
            } else{
                matriz[i][n] = 0;
            }
        }
    }

    for(i=0;i<5;i++){
        for(n=0;n<5;n++){
            printf("%d ",matriz[i][n]);
        }
        printf("\n");
    }
}