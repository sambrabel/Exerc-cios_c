#include <stdio.h>
#include <stdlib.h>

void repeticao (int quantidade){
    while(quantidade>0){
        printf("=");
        quantidade--;
    }
}
int main(){
    int quantidade;
    
    printf("Digite a quantidade de vezes que você quer que o carcter = se repita:\n");
    scanf("%d",&quantidade);

    repeticao(quantidade);
}