#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n;
    int s = 0;

    printf("Digite um número :\n");
    scanf("%d",&n);

    while(n>=0){
    s += n;
    n--;
    }
    printf("%d",s);
return 0;
}