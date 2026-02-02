#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int nota;
    int n = 0;
    int s = 0;

    printf("Digite a nota do aluno (entre 10 e 20 para continuar):\n");
    scanf("%d", &nota);

    // O segredo é processar a nota APENAS se ela for válida
    while (nota >= 10 && nota <= 20) {
        s += nota; // Soma a nota válida
        n++;       // Incrementa o contador
        
        printf("Digite a próxima nota (ou fora do intervalo para sair):\n");
        scanf("%d", &nota); 
        // Se a nota nova for inválida, o while volta ao topo e sai SEM somar.
    }

    if (n > 0) {
        // Usamos float para a divisão não ser "cortada" (ex: 15/2 = 7.5 e não 7)
        printf("\nA média das %d notas válidas é: %.2f\n", n, (float)s / n);
    } else {
        printf("\nNenhuma nota válida foi inserida.\n");
    }

    return 0;
}