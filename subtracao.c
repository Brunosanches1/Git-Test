#include <stdio.h>

int subtracao(int a, int b) {
    return (a - b);
}

int main() {
    int x = 5, y = 2;

    printf("A subtracao de %d e %d eh igual a %d", x, y, subtracao(x, y));

    return 0;
}
