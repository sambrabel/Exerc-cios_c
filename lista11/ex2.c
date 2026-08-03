#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;
    FILE *arq = fopen("arquivo2.txt","w");
    if(arq==NULL){
        printf("Erro no arquivo");
        return 1;
    }
        printf("Digite um caracter:\n");
        scanf("%c",&letra);
        while(letra!='0'){
            fputc(letra,arq);
            fputc('\n',arq);
            printf("Digite um caracter:\n");
            scanf(" %c",&letra);
        }
    fclose(arq);
    
    arq = fopen("arquivo2.txt","r");
        char palavras[3];
        int contagem = 0;
        while((fgets(palavras,3,arq))!=NULL){
            contagem ++;
        }
    fclose(arq);
        printf("O programa tem %d linhas.",contagem);
        return 0;
}