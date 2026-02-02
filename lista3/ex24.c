#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
  int n;
  int i;
int soma = 0;
  printf("Digite um número:\n");
  scanf("%d",&n);

  for(i=1;i<n;i++){
   if (n%i==0){
   soma+=i;
   }
  }
  printf("%d\n",soma);
    return 0;
}