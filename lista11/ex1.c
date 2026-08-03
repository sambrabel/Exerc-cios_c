#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;
    FILE *arq = fopen("arquivo.txt","w");
        printf("Digite um caracter:\n");
        scanf("%c",&letra);
        
        while(letra!='0'){
            fputc(letra,arq);
            printf("Digite um caracter:\n");
            scanf("%c",&letra);
        }
        fclose(arq);
        
}