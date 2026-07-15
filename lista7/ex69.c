#include <stdio.h>
#include <stdlib.h>

struct funcao {
    int a;
    int b;
};

typedef struct funcao funcao;

funcao simplifica (funcao valores){
    int mdc = 1;
    int i;

    for(i=1; i<=valores.a && i<=valores.b; i++){
        if(valores.a%i==0 && valores.b%i==0){
            mdc = i;
        }
    }
    valores.a /= mdc;
    valores.b /= mdc;
    return valores;
}

funcao soma (funcao frac1, funcao frac2){
    funcao soma;

    soma.a = frac1.a*frac2.b + frac1.b*frac2.a;
    soma.b = frac1.b*frac2.b; 

    soma = simplifica(soma); 
    return soma;
}

funcao sub (funcao frac1, funcao frac2){
    funcao sub;

    sub.a = frac1.a*frac2.b - frac1.b*frac2.a;
    sub.b = frac1.b*frac2.b; 

    sub = simplifica(sub); 
    return sub;
}

funcao quo (funcao frac1, funcao frac2){
    funcao quo;

    quo.a = frac1.a * frac2.a;
    quo.b = frac1.b * frac2.b; 
    
    quo = simplifica(quo); 
    return quo;
}

funcao divisao (funcao frac1, funcao frac2){
    funcao div;

    div.a = frac1.a * frac2.b; 
    div.b = frac1.b * frac2.a; 
    
    div = simplifica(div); 
    return div;
}

int main(){
    funcao func1;
    funcao func2;

    printf("Digite o valor do numerador e do denominador da primeira funcao:\n");
    scanf("%d %d", &func1.a, &func1.b); 
    
    printf("Digite o valor do numerador e do denominador da segunda funcao:\n");
    scanf("%d %d", &func2.a, &func2.b); 

    func1 = simplifica(func1); 
    func2 = simplifica(func2);

    funcao som, su, divi, mult;

    som = soma(func1,func2);
    su = sub(func1,func2);
    divi = divisao(func1,func2);
    mult = quo(func1,func2);

    printf("A soma e %d/%d, a subtracao e %d/%d, a multiplicacao e %d/%d e a divisao e %d/%d\n",
           som.a, som.b, su.a, su.b, mult.a, mult.b, divi.a, divi.b);

    return 0;
}