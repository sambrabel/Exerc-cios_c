#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
 
  int i;
int n;
int seq = 1;

printf("Digite o número de repetições da sequência armônica.\n");
scanf("%d",&n);

  for(i=1;i<=n;i++){
   seq+=1/i;
   }
  
  printf("%d\n",seq);
    return 0;
}