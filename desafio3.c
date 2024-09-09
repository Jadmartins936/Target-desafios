#include <stdio.h>

int main() {
    int ind = 12, soma = 0, n = 1;

    while (n < ind) {
        n = n + 1;
        soma = soma + n;
    }

    printf("O valor da variável 'soma' é: %d\n", soma);

    return 0;
}
