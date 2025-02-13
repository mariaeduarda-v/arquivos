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

int calcularMMC(int a, int b){
    return(a * b) / calcularMDC(a, b);
}

int main(){
    int x, y;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Digite outro numero: ");
    scanf("%d", &y);

    int mmc = calcularMMC(x, y);

    printf("O MMC de %d e %d e: %d\n", x, y, mmc);

    return 0;
}