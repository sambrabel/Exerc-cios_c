#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet1[10];
    int vet2[10];
    int i,n;    
    for (i=0;i<10;i++){
        printf("Digite o valor %d do vetor 1:\n",i);
        scanf("%d",&vet1[i]);
}

    for (i=0;i<10;i++){
        printf("Digite o valor %d do vetor 2:\n",i);
        scanf("%d",&vet2[i]);
}

    int qnt = 0;
    for (i=0;i<10;i++){
        for (n=0;n<10;n++){
            if(vet1[i]==vet2[n]){
                qnt++;
    
        }
    }
    }
    int uni_repetido[qnt];
    
    for (i=0;i<10;i++){
        for (n=0;n<10;n++){
            if(vet1[i]==vet2[n]){
                uni_repetido[i]=vet1[i];
    
        }
    }
    }    
    int qnt2 = qnt;
   for (i=0;i<qnt;i++){
        for (n=0;n<qnt;n++){
            if(uni_repetido[i]==uni_repetido[n] && i!=n){
                qnt2--;
                
        }
    }
    }
    int t = 0;
    int uni[qnt2];
    for (i=0;i<qnt;i++){
        for (n=0;n<qnt;n++){
            if(uni_repetido[i]==uni_repetido[n] && i!=n){
                t = 1;
    
        }
        if (t==0){
            uni[i]=uni_repetido[i];
        } else{
            t = 0;
        }
    }
    }
    for(i=0;i<qnt2;i++){
        printf("%d",uni[i]);
    }
    return 0;
}
