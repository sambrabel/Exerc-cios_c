#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
  int n;
  int i;

  printf("Digite um número:\n");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
   if (n%i==0){
   printf("%d\n",i);
   }
  }

    return 0;
}