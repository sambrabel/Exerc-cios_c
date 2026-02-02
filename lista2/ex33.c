#include <stdio.h>
int main(){
    float preco;

    printf("Digite o valor do seu produto:\n");
    scanf("%f",&preco);

    if (preco<50){
    printf("O novo valor sera: %.2f\n.",preco*1.05);
    } else if  (preco>50 && preco<=100){
    printf("O novo valor sera: %.2f\n",preco*1.1);
    } else if(preco>100){
    printf("O novo valor sera: %.2f\n",preco*1.15);
    }

    return 0;

}