#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int i,j;
    float soma = 0;
    float fat = 1;

    for(i=1;i<5;i++){
    for(j=i*2;j>0;j--){
    fat*=j;}
    soma += i/fat;
    }

    printf("A soma dos 5 primeiros valores é: %f",soma);
    return 0;
}