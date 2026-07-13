#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int matriz [4][4];
    int i,n;
    

    for(i=0;i<4;i++){
        for(n=0;n<4;n++){
            matriz[i][n] = i*n;
        }
    }

    for(i=0;i<5;i++){
        for(n=0;n<5;n++){
            printf("%d ",matriz[i][n]);
        }
    }





}