#include <stdio.h>
#include <stdlib.h>

int main(){
char letra = {'B'};
int falta;
float nota;

printf("Digite sua nota:\n");
scanf("%f",&nota);
printf("Digite o numero de faltas:\n");
scanf("%d",&falta);


 if(nota>=9.0 && nota<=10.0){
letra = 'A';
}else if(nota>=7.5 && nota<9.0){
letra = 'B';
}else if(nota>=5.0 && nota<7.5){
letra = 'C';
} else if(nota>=4.0 && nota<5.0){
letra = 'D';
} else if(nota<4.0){
letra = 'E';
} else{
printf("Nota mal inserida.");
exit(1);
}


if(falta>20 && letra!= 'E'){
letra = letra +1;
    }

printf("O seu conceito e: %c",letra);
return 0;
}