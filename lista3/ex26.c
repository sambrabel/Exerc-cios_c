#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
  int n;
  int i=0;

  printf("Digite um número:\n");
  scanf("%d",&n);

  while(i==0){
     if (n%13==0||n%11==0||n%17==0){
     printf("%d",n);
     i++;
   }else{n++;}
  }
  
    return 0;
}