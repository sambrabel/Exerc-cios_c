#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    long int n1 = 0;
    long int n2 = 1;
    long int proximo = 0;

    printf("Termos pares da sequência de Fibonacci até 4.000.000:\n");

    while (n1 <= 4000000) {
       
        if (n1 % 2 == 0) {
            printf("%ld ", n1);
        }

       
        proximo = n1 + n2;
        n1 = n2;
        n2 = proximo;
    }

    return 0;
}