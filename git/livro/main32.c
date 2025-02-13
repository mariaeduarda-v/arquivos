#include <stdio.h>
#include <math.h>

int calcularMDC(int a, int b){
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}
int main(){
    int x, y;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Digite outro numero: ");
    scanf("%d", &y);

    int mdc = calcularMDC(x, y);

    printf("O MDC de %d e %d e: %d\n", x, y, mdc);

    return 0;
}