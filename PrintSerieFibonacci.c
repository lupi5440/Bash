#include <stdio.h>
#include <stdlib.h>

void printFibonacciSeries(int n) {
    int first = 0, second = 1, next, i;

    printf("Serie Fibonacci de %d elementos:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        printf("El número debe ser un entero positivo.\n");
        return 1;
    }

    printFibonacciSeries(n);

    return 0;
}
