#include <stdio.h>
#include <stdlib.h>

int main(){
    int var;
    int *a;
    int **b;
    int ***c;

    a = &var;
    b = &a;
    c = &b;

    printf("Digite um valor para variável:\n");
    scanf("%d",&var);

    printf("O dobro é: %d\n",(*a)*2);
    printf("O triplo é: %d\n",(**b)*3);
    printf("O quadruplo é: %d\n",(***c)*4);

    return 0;
}