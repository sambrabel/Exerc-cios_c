#include <stdio.h>
#include <stdlib.h>

struct info{
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    float media;
};

typedef struct info info;

int main(){
    info infoAlunos[3];
    int i;
    

    for(i=0;i<3;i++){
        printf("Digite a matrícula do aluno %d:\n",i+1);
        scanf(" %d",&infoAlunos[i].matricula);
        printf("Digite a nota 1 do aluno %d:\n",i+1);
        scanf(" %f",&infoAlunos[i].nota1);
        printf("Digite a nota 2 do aluno %d:\n",i+1);
        scanf(" %f",&infoAlunos[i].nota2);
        printf("Digite a nota 3 do aluno %d:\n",i+1);
        scanf(" %f",&infoAlunos[i].nota3);
    }
    float maiorNota = infoAlunos[0].nota1;
    int  maiorMatricula = infoAlunos[0].matricula;

    for(i=0;i<3;i++){
        if(maiorNota<infoAlunos[i].nota1){
            maiorNota = infoAlunos[i].nota1;
            maiorMatricula = infoAlunos[i].matricula;
        }
    }
    printf("O aluno com maior nota na p1 tem matrícula %d\n",maiorMatricula);

    for(i=0;i<3;i++){
        infoAlunos[i].media = (infoAlunos[i].nota1 + infoAlunos[i].nota2 + infoAlunos[i].nota3)/3;
    }

    float maiorMedia[2] = {infoAlunos[0].media,infoAlunos[0].matricula};
    float menorMedia[2] = {infoAlunos[0].media,infoAlunos[0].matricula};

    for(i=0;i<3;i++){
        if(infoAlunos[i].media> maiorMedia[0]){
            maiorMedia[0] = infoAlunos[i].media;
            maiorMedia[1] = infoAlunos[i].matricula;
        
        }
        if(infoAlunos[i].media< menorMedia[0]){
            menorMedia[0] = infoAlunos[i].media;
            menorMedia[1] = infoAlunos[i].matricula;
        }
    }
    printf("O aluno com maior media tem matrícula %.0f e o com menor media tem matricula %.0f\n",maiorMedia[1],menorMedia[1]);

    for(i=0;i<3;i++){
        if(infoAlunos[i].media>6){
            printf("O aluno com matrícula %d foi aprovado!\n",infoAlunos[i].matricula);
        }
        else{
            printf("O aluno com matrícula %d não foi aprovado!\n",infoAlunos[i].matricula);
        }
    }
    return 0;
}