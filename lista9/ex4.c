#include <stdio.h>
#include <stdlib.h>

void troca (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int var1,var2;

    printf("Digite dois números:\n");
    scanf(" %d %d", &var1,&var2);

    printf("Antes da troca var1 = %d e var2 = %d\n",var1,var2);

    troca(&var1,&var2);
    printf("Depois da troca var1 = %d e var2 = %d\n",var1,var2);

    return 0;
}