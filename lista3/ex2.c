#include <stdio.h>
int main(){
int n;

for (n=1;n<101;n++){
printf("%d",n);
}
n = 1;
while(n<=100){
printf("%d",n);
n++;
}
n = 1;
do{
printf("%d",n);
n++;
} while(n<=100);
return 0;
}