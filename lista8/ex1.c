#include <stdio.h>
#include <stdlib.h>

int soma(int num){
    if(num==1){
        return 1;
    }
    return num + soma(num-1);

}

int main(){
    int num,total;

    printf("Digite um número:\n");
    scanf("%d",&num);

    total = soma(num);

    printf("%d",total);
}