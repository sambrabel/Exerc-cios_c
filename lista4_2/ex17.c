#include <stdio.h>
#include <stdlib.h>

int main(){
    int notas[10][3];
    int i,j;
    int quantidadeMenores[3] = {0};
    int menor,inter;

    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            printf("Digite a nota do aluno %d na prova %d:\n",i+1,j+1);
            scanf(" %d",&notas[i][j]);
        }
    }

    for(i=0;i<10;i++){
        menor = 10;
        for(j=0;j<3;j++){
            if(notas[i][j]<=menor){
                menor = notas[i][j];
                inter = j;
            }
        }
        quantidadeMenores[inter]++;
    }

    for(i=0;i<3;i++){
        printf("%d alunos tem a menor nota na prova %d\n",quantidadeMenores[i],i+1);
    }

    return 0;

}