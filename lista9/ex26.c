#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void baskara (float a, float b, float c, float *x1, float *x2){
    float delta = pow(b,2) -4*a*c;

    if(delta<0){
        printf("Não existe uma solução em R");
        exit(0);
    }
    else if(delta == 0){
        *x1 = *x2 = -b/(2*a);
    }else{
        *x1 = (-b + sqrt(delta))/(2*a);
        *x2 = (-b - sqrt(delta))/(2*a);
    }
}

int main(){
    float a,b,c,x1,x2;

    printf("Digite os valores de a,b e c para fazer uma equação do segundo grau:\n");
    scanf(" %f %f %f", &a, &b, &c);

    baskara(a,b,c,&x1,&x2);

    printf("Os valores de x1 e x2 são %.2f e %.2f",x1,x2);
    return 0;

}