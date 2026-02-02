#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale(LC_ALL,"Portuguese");
 int i = 1;
 int n;

    printf("Digite um número par:\n");
    scanf("%d",&n);
    
    
    while (n>=0){
    if (n%2==0){
    printf("%d\n",n);
    }else{
    n--;
    printf("%d\n",n); }
    n--;}
return 0;
}