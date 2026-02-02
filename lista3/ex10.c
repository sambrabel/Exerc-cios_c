#include <stdio.h>
#include <locale.h>

int main(){
    int i;
    int m = 50;
    int soma = 0;

    for(i=0;i<=m;i++){
    if(i%2==0){
    soma += i;
 } else {
    m +=1;}}
    printf("%d\n",soma);
    return 0;
}