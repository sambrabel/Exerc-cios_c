#include <stdio.h>
#include <stdlib.h>

struct vetor{
    float x;
    float y;
    float z;
};
typedef struct vetor vetor;

int main(){
    vetor vet[2];
    vetor vetSoma;
    int i;

    for (i=0;i<2;i++){
        printf("Digite a coordenada x para o vetor %d:\n",i);
        scanf("%f",&vet[i].x);
        printf("Digite a coordenada y para o vetor %d:\n",i);
        scanf("%f",&vet[i].y);
        printf("Digite a coordenada x para o vetor %d:\n",i);
        scanf("%f",&vet[i].z);
    }

    vetSoma.x = vet[0].x + vet[1].x;
    vetSoma.y = vet[0].y + vet[1].y;
    vetSoma.z = vet[0].z + vet[1].z;

    printf("O vetor soma tem coordenadas: %.2f em x %.2f em y e %.2f em z",vetSoma.x, vetSoma.y,vetSoma.z);
    return 0;

}