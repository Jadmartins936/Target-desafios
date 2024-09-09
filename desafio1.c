#include <stdio.h>

void calcular_fibonacci(int n) {
    int a = 0, b = 1, temp;
    printf("Sequência de Fibonacci até %d: ", n);
    printf("%d ", a);

    if (n == 0) {
        printf("\n");
        return;
    }

    printf("%d ", b);

    while (b < n) {
        temp = b;
        b = a + b;
        a = temp;
        printf("%d ", b);
    }

    printf("\n");
}

int pertence_fibonacci(int n) {
    int a = 0, b = 1, temp;
    while (b < n) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b == n;
}

int main() {
    int numero;
    printf("Informe um número: ");
    scanf("%d", &numero);

    calcular_fibonacci(numero);

    if (pertence_fibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
