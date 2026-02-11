#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
setlocale(LC_ALL,"Portuguese");
 int num;
long int soma1 = 0;
long int soma2 = 0;

for(num=1;num<=100;num++){
soma1 += num*num;

}

soma2 = pow(((1+100)*50),2);

printf("A diferença é %ld - %ld = %ld",soma2,soma1,soma2-soma1);
return 0;
}