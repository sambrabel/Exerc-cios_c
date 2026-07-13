#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int matriz[10][10];
    int i,n;

    for(i=0;i<10;i++){
        for(n=0;n<10;n++){
            if(i<n){
                matriz[i][n] = 2*i + 7*n - 2;
            } else if(i==n){
                matriz[i][n] = 3 * pow(i,2) - 1;
            } else if (i>n){
                matriz[i][n] = 4 * pow(i,3) - 5 * pow(i,2) + 1;
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