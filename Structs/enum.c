#include <stdio.h>

// enum -- enumeração
enum dias_da_semana {
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado,
    domingo
};

int main() {
    enum dias_da_semana d1, d2;

    d1 = quinta; // quinta é o valor 3
    d2 = 4;      // sexta tem o valor 4

    // Verifica se os dias são iguais
    if (d1 == d2) {
        printf("Os dias são iguais...\n");
    } else {
        printf("Os dias não são iguais.\n");
    }

    return 0;
}
