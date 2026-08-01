#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    float media;
    int ano;
};
typedef struct aluno aluno;

void registro (aluno *vetor, int i ){
    int n;

    for(n=0;n<i;n++){
        printf("Digite a matricula do aluno %d:\n",n+1);
        scanf("%d",&vetor[n].matricula);
        printf("Digite a media do aluno %d:\n",n+1);
        scanf("%f",&vetor[n].media);
        printf("Digite o ano de nascimento do aluno %d:\n",n+1);
        scanf("%d",&vetor[n].ano);
    }
}

int main(){
    int quantidade_alunos;

    printf("Digite a quantidade de alunos que serão catalogados:\n");
    scanf("%d",&quantidade_alunos);

    aluno *vetor = (aluno*) malloc(quantidade_alunos*sizeof(int));

    if(vetor==NULL){
        printf("Erro");
        exit(1);
    }
    
    registro(vetor,quantidade_alunos);

    int i;
    for(i=0;i<quantidade_alunos;i++){
        printf(" A matricula do aluno é %d\n",vetor[i].matricula);
        printf(" A media do aluno %.2f\n",vetor[i].media);
        printf(" O ano de nascimento do aluno %d\n",vetor[i].ano);
    }
    free(vetor);
    vetor = NULL;
}