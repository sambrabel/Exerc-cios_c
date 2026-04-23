#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int veta[100];
    int i;
    int j = 0;
    

    for (i=0;i<100;i++){
        if(i%7!=0 || i%10!=7){
            veta[j]=i;
            j++;
        }
    }

    
    for (i=0;i<100;i++){
        printf("%d",veta[i]);
        }
    


    

    
    return (0);
}