#include <stdio.h>

void maior (float n1,float n2){
    if(n1>n2){
        printf("%.2f é maior que %.2f\n",n1,n2);
    } else if (n2>n1){
        printf("%.2f é maior que %.2f\n",n2,n1);
    } else{
        printf("Eles são iguais");
    }
}

int main(){
    float n1,n2;

    printf("Digite dois números:\n");
    scanf(" %f %f", &n1,&n2);

    maior(n1,n2);
}