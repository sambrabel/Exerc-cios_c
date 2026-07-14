#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    float media;
};

typedef struct aluno aluno;

int main(){
    aluno infoAlunos[10];
    int i;
    int a = 0;
    int b = 0;

    for(i=0;i<10;i++){
        printf("Digite a matrícula do aluno %d:\n",i);
        scanf("%d",&infoAlunos[i].matricula);
        printf("Digite a media do aluno %d:\n",i);
        scanf("%f",&infoAlunos[i].media);
        if(infoAlunos[i].media>=5){
            a++;
        }else{
            b++;
        }
    }

    int aprovados [a];
    int reprovados [b];
    int cont1 = 0;
    int cont2 = 0;
    for(i=0;i<10;i++){
        if(infoAlunos[i].media>=5){
            aprovados[cont1] = infoAlunos[i].matricula;
            cont1++;
        } else{
            reprovados[cont2] = infoAlunos[i].matricula;
            cont2++;
        }
    }

    printf("Segue a lista de aprovados:\n");
    for(i=0;i<a;i++){
        printf("%d ",aprovados[i]);
    }
    printf("\n");

    printf("Segue a lista de reprovados:\n");
    for(i=0;i<b;i++){
        printf("%d ",reprovados[i]);
    }
    printf("\n");

}