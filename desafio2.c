#include <stdio.h>
#include <ctype.h>

int conta_a(char* string) {
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (tolower(string[i]) == 'a') {
            count++;
        }
    }
    return count;
}

int main() {
    char string[100];
    printf("Informe uma string: ");
    fgets(string, sizeof(string), stdin);

    int count = conta_a(string);
    if (count > 0) {
         printf("A letra 'a' aparece SIM na string.\n", count);
        printf("A letra 'a' aparece %d vezes na string.\n", count);
    } else {
         printf("A letra 'a' NÃO aparece na string.\n", count);
        printf("A letra 'a' não aparece na string.\n");
    }

    return 0;
}
