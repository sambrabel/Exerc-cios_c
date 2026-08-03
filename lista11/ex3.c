#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;
    printf("Digite uma letra:\n");
    scanf(" %c",&letra);
    FILE *arq = fopen("arquivo3.txt","w");
        if(arq == NULL){
            printf("Erro ao criar o arquivo.");
            return 1; 
        }
        while(letra!='0'){
            fputc(letra,arq);
            printf("Digite uma letra:\n");
            scanf(" %c",&letra);           
        }
    fclose(arq);
    int vogais = 0;
    arq = fopen("arquivo3.txt","r");
        while((letra = fgetc(arq))!=-1){
            if(letra=='a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
                vogais ++;
            }
        }
    fclose(arq);
    printf("O número de vogais no arquivo é %d.",vogais);
    return 0;
}