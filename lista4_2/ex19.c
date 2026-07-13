#include <stdio.h>
#include <stdlib.h>

int main(){
    float infoAlunos[5][4];
    float maior,inter;
    int i,j;
    float media = 0;

    for (i=0;i<5;i++){
        for(j=0;j<4;j++){
            if(j==0){
                printf("Digite a matrícula do aluno %d:\n",i+1);
                scanf("%f",&infoAlunos[i][j]);
            }
            if(j==1){
                printf("Digite a média das provas do aluno %d:\n",i);
                scanf("%f",&infoAlunos[i][j]);
            }
            if(j==2){
                printf("Digite a média dos trabalhos do aluno %d:\n",i);
                scanf("%f",&infoAlunos[i][j]);
            }
            if(j==3){
                infoAlunos[i][3] = (infoAlunos[i][2] + infoAlunos[i][3])/2;
            }
        }
        
    }

    maior = infoAlunos[0][0];
    inter = infoAlunos[0][3];

    for(i=1;i<5;i++){
        if(infoAlunos[i][3]>inter){
            maior = infoAlunos[i][0];
        }
    }

    printf("O aluno com maior nota tem matrícula %.0f\n",maior);

    for(i=0;i<5;i++){
        media+= infoAlunos[i][3];
    }
    media/=5;

    printf("A media dos alunos é de %.2f.",media);
    return 0;
}