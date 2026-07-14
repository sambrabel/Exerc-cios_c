#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct mercado {
    int codigo;
    int quantidade;
    float preco;
};

typedef struct mercado mercado;

int main(){
    mercado compras[10];
    int i;

    for (i=0;i<10;i++){
        printf("Digite o código do produto %d:\n",i);
        scanf("%d",&compras[i].codigo);
        printf("Digite a quantidade de estoque do produto %d:\n",i);
        scanf("%d",&compras[i].quantidade);
        printf("Digite o preço do produto %d:\n",i);
        scanf("%f",&compras[i].preco);
    }

    int cod;
    bool verification = 0;
    int quantidade;
    while(0){
        printf("Digite o código do produto que deseja:\n");
        scanf("%d",&cod);
        if(cod==0){
            break;
        }
        for(i=0;i<10;i++){
            if(cod==compras[i].codigo){
                verification = 1;
            }
        }
        if(!verification){
            printf("Esse código não existe.\n");
        } else{
            verification = 0;
            printf("Digite a quantidade do produto que você deseja, tem %d no estoque:\n",compras[cod].quantidade);
            scanf("%d",&quantidade);
            if(quantidade<0 || quantidade > compras[cod].quantidade){
                printf("Quantidade inválida\n");
            }else{
                compras[cod].quantidade-=quantidade;
                printf("Operação relizada com sucesso\n.");
            }

        }
    }
    return 0;
}