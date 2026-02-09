#include <stdio.h>
#include <locale.h>

int main(){
    int n,i;
    float seq = 1.0;
    long fat = 1.0;

    printf("Digite o número de sequências que deseja:\n");
    scanf("%d",&n);
 
    for (i=1;i<=n;i++){
    fat *= i;
    seq += 1.0/fat;
    }

    printf("O valor da sequência é:%f",seq);
    return 0;

}