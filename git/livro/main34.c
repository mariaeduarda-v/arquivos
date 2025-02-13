#include <stdio.h>

int main() {
    int a, b, r;

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &a, &b);

    r = 1;

    for (int i = 0; i < b; i++){
        r *= a;
    }

    printf("O resultado da exponenciacao de %d e %d e: %d\n", a, b, r);

    return 0;
}