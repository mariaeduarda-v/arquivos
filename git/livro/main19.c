#include <stdio.h>

int main() {
    float n1, n2, n3,n4, n5;
    float m;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
    printf("Digite o quarto numero: ");
    scanf("%f", &n4);
    printf("Digite o quinto numero: ");
    scanf("%f", &n5);

    m = (n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4 + n5 * 5)/(1 + 2 + 3 + 4 + 5);

    printf("A media ponderada e: %.2f\n", m);

    return 0;
}