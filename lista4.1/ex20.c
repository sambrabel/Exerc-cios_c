#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int vet[10];
    int i;
    
    int x = 0;

    for (i=0;i<10;i++){
        printf("Digite um valor para o vetor na posição %d:\n",i);
        scanf("%d",&vet[i]);
        if (vet[i]>50 || vet[i]<0){
            printf("Número inválido!");{
            exit(1);}
        }
        if(vet[i]%2!=0){
            x++;
        }
    }
    int veti[x];
    int n =0;
    for (i=0;i<10;i++){
        if(vet[i]%2!=0){
            veti[n]=vet[i];
            n++;
        }}
    


    for (i=0;i<10;i++){
        printf("%d ",vet[i] );}

    printf("\nAgora os valores ímpares:\n");
        
    for (i=0;i<x;i++){
        printf("%d ",veti[i] );}
    return (0);
}