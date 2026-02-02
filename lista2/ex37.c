#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");

float h1,h2,h3,min1,min2;


printf("Digite o horario de entrada (primeiro a hora depois os minutos)\n");
scanf("%f",&h1);
(getchar() != '\n');
printf("%.0f:_",h1);
scanf("%f",&min1);
printf("%.0f:%.0f\n",h1,min1);

printf("Digite o horario de saída (primeiro a hora depois os minutos)\n");
scanf("%f",&h2);
(getchar() != '\n');
printf("%.0f:_",h2);
scanf("%f",&min2);
printf("%.0f:%.0f\n",h2,min2);

h3 = h2 - h1;
if(h3<0){
printf("Passaram de 24horas.");
exit(1);
}

if(min2-min1>0){
h3++;
}

if(h3>=5){
printf("Será  pelo o tempo de %.2f horas e você deve pagar %.2f reais.",h3,h3*2);
} else if(h3>=3){
printf("Será  pelo o tempo de %.2f horas e você deve pagar %.2f reais.",h3,h3*1.4);
} else if(h3>=1){
printf("Será  pelo o tempo de %.2f horas e você deve pagar %.2f reais.",h3,h3*1);
}
return 0;




 

}