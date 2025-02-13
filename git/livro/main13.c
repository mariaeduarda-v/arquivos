#include <stdio.h>
#include <math.h>

int main() {
    double r, n;
    int p;

    printf("Digite um número: ");
    scanf("%lf", &n); // Use %lf para double

    r = sqrt(n);
    p = round(r); // Use round() para arredondar

    printf("O número inteiro mais próximo de %.2f é: %d\n", r, p);

    return 0;
}