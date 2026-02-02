#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
 
  int i;
int soma = 0;
 
  for(i=3;i<1000;i++){
   if (i%3==0||i%5==0){
   soma+=i;
   }
  }
  printf("%d\n",soma);
    return 0;
}