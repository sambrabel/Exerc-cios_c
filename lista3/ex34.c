#include <stdio.h>
#include<locale.h>
int main(){
    long long int x = 2520;
    long long int y = 2520;
    int divisivel = 0;
    int i;

for (i=11;i<21;i++){
while(x%i!=0){
    x += y;
}
y = x;
}
 printf("%lld",x);

        return 0;

}