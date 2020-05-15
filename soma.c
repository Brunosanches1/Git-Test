#include <stdio.h>

int soma(int a, int b) {
    return (a + b);
}

int main() {
    int x = 3, y = 5;

    printf("A soma de %d e %d eh igual a %d", x, y, soma(x,y));

    return 0;
}
