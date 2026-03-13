#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num;

    printf("Digite um numero (0 ou menor para sair):\n");
    scanf("%f", &num);

    while(num > 0){
        // Adicionei o terceiro %.2f para a raiz quadrada
        printf("Quadrado: %.2f | Cubo: %.2f | Raiz: %.2f\n", num*num, num*num*num, sqrt(num));
        
        printf("Digite um numero:\n");
        scanf("%f", &num);
    }

    return 0;
}