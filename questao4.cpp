#include <stdio.h>

int main() {
    int inicial, razao, i;
    int PG[10];

    printf("Insira o numero inicial: ");
    scanf("%d", &inicial);

    printf("Insira a razao: ");
    scanf("%d", &razao);

    PG[0] = inicial;

    for (i = 1; i < 10; i++) {
        PG[i] = PG[i-1] * razao;
    }

    printf("Termos da PG: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", PG[i]);
    }

    return 0;
}

