#include <stdio.h>
#include <stdlib.h>
int main(){
    
    char aluno [3][11];
    char gabarito [10];
    int pontuação[3]={0};
    int i;

    printf("Digite o gabarito:\n");

    for(i=0;i<10;i++){
        printf("Qual a resposta da questão %d?\n",i+1);
        scanf(" %c",&gabarito[i]);
        fflush(stdin);
  
    }

    printf("Qual a matrícula do aluno 1?\n");
    scanf(" %c",&aluno[0][0]);

    printf("Qual a matrícula do aluno 2?\n");
    scanf(" %c",&aluno[1][0]);

    printf("Qual a matrícula do aluno 3?\n");
    scanf(" %c",&aluno[2][0]);

    for(i=1;i<11;i++){
        printf("Resposta %d do aluno 1:\n",i);
        scanf(" %c",&aluno[0][i]);
    }

    for(i=1;i<11;i++){
        printf("Resposta %d do aluno 2:\n",i);
        scanf(" %c",&aluno[1][i]);
    }

    for(i=1;i<11;i++){
        printf("Resposta %d do aluno 3:\n",i);
        scanf(" %c",&aluno[2][i]);
    }

    for(i=1;i<11;i++){
        if(aluno[0][i]==gabarito[i-1]){
            pontuação[0]++;
        }
        if(aluno[1][i]==gabarito[i-1]){
            pontuação[1]++;
        }
        if(aluno[2][i]==gabarito[i-1]){
            pontuação[2]++;
        }
    }

    printf("O aluno 1 de matrícula %c tem pontuação %d.\n",aluno[0][0],pontuação[0]);
    printf("O aluno 2 de matrícula %c tem pontuação %d.\n",aluno[1][0],pontuação[1]);
    printf("O aluno 3 de matrícula %c tem pontuação %d.\n",aluno[2][0],pontuação[2]);

    return 0;
}